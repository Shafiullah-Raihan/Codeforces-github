#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
#define PB push_back
#define MOD 1000000007
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
 
int main() {
    bismillah;
    int T;
    cin >> T;
    while (T--) {
        ll n, left, right;
        cin >> n >> left >> right;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
 
        // Adjust left and right to valid ranges
        right = min(right, n);
        left = max(left, 1LL);
 
        // Calculate range length
        ll rangeLength = right - left + 1;
 
        // Priority queues (min-heaps) to find smallest elements
        priority_queue<ll> leftHeap;  // For the first 'right' elements
        priority_queue<ll> rightHeap; // For elements in range [left, n]
 
        // Process the first 'right' elements
        for (int i = 0; i < right; i++) {
            leftHeap.push(v[i]);
            if (leftHeap.size() > rangeLength) {
                leftHeap.pop();  // Keep only the smallest 'rangeLength' elements
            }
        }
 
        // Process the elements in the range [left-1, n-1]
        for (int i = left - 1; i < n; i++) {
            rightHeap.push(v[i]);
            if (rightHeap.size() > rangeLength) {
                rightHeap.pop();  // Keep only the smallest 'rangeLength' elements
            }
        }
 
        // Calculate the sums
        ll leftSum = 0, rightSum = 0;
        while (!leftHeap.empty()) {
            leftSum += leftHeap.top();
            leftHeap.pop();
        }
        while (!rightHeap.empty()) {
            rightSum += rightHeap.top();
            rightHeap.pop();
        }
 
        // Output the minimum sum
        cout << min(leftSum, rightSum) << endl;
    }
    return 0;
}