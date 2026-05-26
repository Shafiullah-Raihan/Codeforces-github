#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<ll> vl;
 
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
ll gcd(ll a, ll b) { return __gcd(a, b); }
 
void solve() {
    ll n;
    cin >> n;
    vl arr(n);
    for (ll &x : arr) cin >> x;
 
    ll gcd_even = 0, gcd_odd = 0;
    for (ll i = 0; i < n; i += 2) gcd_even = gcd(gcd_even, arr[i]);
    for (ll i = 1; i < n; i += 2) gcd_odd = gcd(gcd_odd, arr[i]);
 
    bool valid_gcd_odd = true, valid_gcd_even = true;
    for (ll i = 0; i < n; i += 2) if (arr[i] % gcd_odd == 0) valid_gcd_odd = false;
    for (ll i = 1; i < n; i += 2) if (arr[i] % gcd_even == 0) valid_gcd_even = false;
 
    if (valid_gcd_odd) cout << gcd_odd << "
";
    else if (valid_gcd_even) cout << gcd_even << "
";
    else cout << 0 << "
";
}
 
int main() {
    fast_io;
    int T;
    cin >> T;
    while (T--) solve();
    return 0;
}