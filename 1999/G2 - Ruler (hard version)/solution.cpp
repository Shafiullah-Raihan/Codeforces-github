#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
void solve() {
    int cnt = 7, l = 1, r = 1000, x;
    while (l < r) {
        int m = (r - l + 1) / 3;
        cout << "? " << l + m << " " << r - m << endl;
        cout.flush();
        cin >> x;
 
        if (x == (l + m + 1) * (r - m + 1)) {
            r = l + m;
        } else if (x == (l + m) * (r - m + 1)) {
            l = l + m + 1;
            r = r - m;
        } else {
            l = r - m + 1;
        }
        cnt--;
    }
    cout << "! " << l << endl;
    cout.flush();
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
 
    return 0;
}