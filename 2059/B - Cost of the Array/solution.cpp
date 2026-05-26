#include <bits/stdc++.h>
using namespace std;
 
void solve() {
    int n, k;
    cin >> n >> k;
    deque<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    if (n == k) {
        set<int> seen;
        int result = -1;
        for (int i = 2; i <= n; i += 2) {
            if (a[i] != i / 2) {
                result = i / 2;
                break;
            }
            seen.insert(i / 2);
        }
 
        if (result == -1) {
            result = seen.size() + 1;
        }
        cout << result << "
";
    } else {
        int pos = -1;
        for (int i = 2; i <= n - k + 2; i++) {
            if (a[i] != 1) {
                pos = i;
                break;
            }
        }
 
        if (pos == -1) {
            map<int, bool> check;
            int current = 2;
            for (int i = n - k + 1; i <= n; i += 2) {
                if (a[i] != current) {
                    break;
                }
                check[current] = true;
                current++;
            }
            cout << check.size() + 2 << "
";
        } else {
            cout << bool(true) << "
"; 
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) solve();
}