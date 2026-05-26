#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
void solve() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }
 
        // Sort the array to use two-pointer technique
        sort(x.begin(), x.end());
 
        int left = 0, right = n - 1;
        int score = 0;
 
        while (left < right) {
            int sum = x[left] + x[right];
 
            if (sum == k) {
                // Found a valid pair
                score++;
                left++;
                right--;
            } else if (sum < k) {
                // Move left pointer to increase the sum
                left++;
            } else {
                // Move right pointer to decrease the sum
                right--;
            }
        }
 
        cout << score << "
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}