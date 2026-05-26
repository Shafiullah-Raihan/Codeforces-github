#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n * m), b(n * m);
    for (auto &e : a) {
        cin >> e;
    }
    for (auto &e : b) {
        cin >> e;
    }
    int ans = -1;
    for (int i = 0; i < n * m; ++i) {
        if (a[ans + 1] == b[i]) {
            ++ans;
        } else if (ans / m == i / m) {
            ans = ans / m * m - 1;
        }
    }
    cout << n * m - ans - 1;
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << '
';
    }
    return 0;
}