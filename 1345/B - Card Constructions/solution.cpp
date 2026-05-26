#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
    long long a;
    cin >> a;
    int r = 0;
    while (a > 1) {
        long long q = ((sqrt(24 * a + 1) - 1) / 6);
        a -= (q * (3 * q + 1)) / 2;
        r += 1;
    }
    cout << r << endl;
}
 
 
int main() {
    int t; // = 1;
    cin >> t;
    for (int _ = 0; _ < t; ++_)
        solve();
    return 0;
}