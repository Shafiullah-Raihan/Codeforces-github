#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
// Function to check if we can partition the bags such that the condition is satisfied
bool canPartition(int maxCarry, const vector<int>& freq, int M) {
    vector<vector<bool>> dp(M + 2, vector<bool>(maxCarry + 1, false));
    dp[1][0] = true;
 
    for (int x = 1; x <= M; x++) {
        for (int carry = 0; carry <= maxCarry; carry++) {
            if (!dp[x][carry]) continue;
            int F = freq[x] + carry;
 
            for (int k = 0; k <= F; k++) {
                int rem = F - k;
                if (rem % 2 != 0) continue;
                if (k > 0 && rem < 2) continue;
 
                if (k <= maxCarry) {
                    dp[x + 1][k] = true;
                }
            }
        }
    }
    return dp[M + 1][0];
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
 
        int M = n + n / 2;
        vector<int> freq(M + 1, 0);
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }
 
        // Binary search to find the minimum maxCarry
        int low = 0, high = 2 * n;
        bool found = false;
 
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canPartition(mid, freq, M)) {
                found = true;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
 
        if (found) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
    return 0;
}