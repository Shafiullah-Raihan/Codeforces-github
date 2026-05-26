#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<ll> vl;
 
#define endl '
'
#define all(a) (a).begin(), (a).end()
#define fr(i, a, n) for (ll i = a; i < n; i++)
 
bool isOk(ll mid, vl &arr, ll n) {
    ll sum = 0;
    for (ll i = 0; i < n; i++) {
        sum += max(0LL, (mid - arr[i]));
        if (sum >= mid) return true;
    }
    return false;
}
 
void raihan() {
    ll n;
    cin >> n;
    vl arr(n);
    fr(i, 0, n) cin >> arr[i];
 
    ll left = *max_element(all(arr)), right = 1e15, res = 0;  
    while (left <= right) {
        ll mid = (left + right) / 2;
        if (isOk(mid, arr, n)) {
            res = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    cout << res << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    raihan();
    return 0;
}