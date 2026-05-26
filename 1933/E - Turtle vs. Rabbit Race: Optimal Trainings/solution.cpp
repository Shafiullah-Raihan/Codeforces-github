#include <bits/stdc++.h>
using namespace std;
#define int long long
 
void solve() {
    int n;
    cin >> n;
    vector<int> a(n + 1), ps(n + 1, 0);
 
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        ps[i] = ps[i - 1] + a[i];
    }
 
    int q;
    cin >> q;
    while (q--) {
        int l, u;
        cin >> l >> u;
 
        int lb = l, rb = n;
        while (lb < rb) {
            int mid = (lb + rb + 1) / 2;
            if (ps[mid] - ps[l - 1] <= u) lb = mid;
            else rb = mid - 1;
        }
 
        int maxu = LLONG_MIN, optid = l;
        for (int i = max(l, lb - 2); i <= min(n, lb + 2); i++) {
            int t = ps[i] - ps[l - 1];
            int ut = (u + (u - t + 1)) * t / 2;
            if (ut > maxu) {
                maxu = ut;
                optid = i;
            }
        }
 
        cout << optid << " ";
    }
    cout << "
";
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}