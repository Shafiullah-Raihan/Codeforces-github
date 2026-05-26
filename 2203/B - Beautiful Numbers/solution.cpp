#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int tc;
    cin >> tc;
 
    while (tc--) {
        string s;
        cin >> s;
 
        int digitSum = 0;
        for (char c : s) {
            digitSum += (c - '0');
        }
 
        if (digitSum <= 9) {
            cout << 0 << endl;
            continue;
        }
 
        int targetReduce = digitSum - 9;
 
        vector<int> reducible;
        reducible.reserve((int)s.size());
 
        for (int idx = 0; idx < (int)s.size(); idx++) {
            int val = s[idx] - '0';
 
            // First digit cannot become 0 (no leading zero allowed)
            if (idx == 0) {
                reducible.push_back(val - 1);
            } else {
                reducible.push_back(val);
            }
        }
 
        sort(reducible.begin(), reducible.end(), greater<int>());
 
        int moves = 0;
        int collected = 0;
 
        for (int take : reducible) {
            if (collected >= targetReduce) break;
            collected += take;
            moves++;
        }
 
        cout << moves << endl;
    }
 
    return 0;
}