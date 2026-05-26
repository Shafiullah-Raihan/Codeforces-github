#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
 
const int MAX_LIMIT = 200005;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    // Step 1: Sieve of Atkin to find primes up to MAX_LIMIT.
    vector<bool> isPrime(MAX_LIMIT + 1, false);
 
    // Step 1.1: Initialize sieve
    for (int x = 1; x * x <= MAX_LIMIT; x++) {
        for (int y = 1; y * y <= MAX_LIMIT; y++) {
            // First condition: n = 4x^2 + y^2
            int n = 4 * x * x + y * y;
            if (n <= MAX_LIMIT && (n % 12 == 1 || n % 12 == 5)) {
                isPrime[n] = !isPrime[n];
            }
 
            // Second condition: n = 3x^2 + y^2
            n = 3 * x * x + y * y;
            if (n <= MAX_LIMIT && n % 12 == 7) {
                isPrime[n] = !isPrime[n];
            }
 
            // Third condition: n = 3x^2 - y^2
            n = 3 * x * x - y * y;
            if (x > y && n <= MAX_LIMIT && n % 12 == 11) {
                isPrime[n] = !isPrime[n];
            }
        }
    }
 
    // Step 1.2: Mark all multiples of squares of primes as non-prime
    for (int x = 5; x * x <= MAX_LIMIT; x++) {
        if (isPrime[x]) {
            for (int i = x * x; i <= MAX_LIMIT; i += x * x) {
                isPrime[i] = false;
            }
        }
    }
 
    // Mark 2 and 3 as prime
    isPrime[2] = isPrime[3] = true;
 
    vector<int> primesList;
    for (int i = 2; i <= MAX_LIMIT; i++) {
        if (isPrime[i]) {
            primesList.push_back(i);
        }
    }
 
    int testCases;
    cin >> testCases;
    while (testCases--) {
        int n;
        cin >> n;
 
        // Using unordered_map for frequency counts
        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            int value;
            cin >> value;
            if (value <= n) {
                freqMap[value]++;
            }
        }
 
        long long result = 0;
 
        // Case 1: Semiprime of the form p^2.
        for (int prime : primesList) {
            if (prime > n) break;
            long long countPrime = freqMap[prime];
            long long primeSquare = (long long)prime * prime;
            if (primeSquare <= n) {
                long long countSquare = freqMap[primeSquare];
                result += countPrime * countSquare + (countSquare * (countSquare + 1LL)) / 2;
            }
        }
 
        // Case 2: Semiprime of the form p * q (distinct primes).
        vector<int> primes;
        for (int prime : primesList) {
            if (prime > n) break;
            primes.push_back(prime);
        }
 
        int primeCount = primes.size();
        vector<long long> suffixSum(primeCount + 1, 0);
 
        for (int i = primeCount - 1; i >= 0; i--) {
            suffixSum[i] = suffixSum[i + 1] + freqMap[primes[i]];
        }
 
        for (int i = 0; i < primeCount; i++) {
            int prime = primes[i];
            long long countPrime = freqMap[prime];
            int maxProduct = n / prime;
 
            // Find the range of q (with p < q) such that p * q <= n.
            int lowIndex = i + 1;
            int highIndex = (int)(lower_bound(primes.begin() + lowIndex, primes.end(), maxProduct + 1) - primes.begin());
 
            // For q in [lowIndex, highIndex), p * q <= n.
            for (int j = lowIndex; j < highIndex; j++) {
                int secondPrime = primes[j];
                long long countSecondPrime = freqMap[secondPrime];
                int product = prime * secondPrime;  // Guaranteed product <= n.
                long long countProduct = freqMap[product];
                long long additional = countPrime * countSecondPrime;
                additional += countPrime * countProduct;
                additional += countSecondPrime * countProduct;
                additional += (countProduct * (countProduct + 1LL)) / 2;
                result += additional;
            }
 
            // For q > maxProduct, only (p, q) pairs are valid.
            if (highIndex < primeCount) {
                long long sumFreq = suffixSum[highIndex];
                result += countPrime * sumFreq;
            }
        }
 
        cout << result << "
";
    }
 
    return 0;
}