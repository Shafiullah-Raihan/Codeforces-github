#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef vector<ll> vl;
 
#define endl '
'
#define PB push_back
#define all(a) (a).begin(), (a).end()
 
#define bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void raihan() {
    ll n;
    cin >> n;
    vl arr(n * 2);
 
    
    for (ll i = 0; i < n * 2; i++) cin >> arr[i];
 
    
    sort(all(arr));
 
    ll sum = 0;
    vl ans;
 
   
    cout << arr[0];
 
   
    for (ll i = 1; i < n * 2 - 1; i += 2) {
        sum += arr[i] - arr[i + 1]; 
        cout << ' ' << arr[i] << ' ' << arr[i + 1];
    }
 
    
    ll p = arr[n * 2 - 1] + (arr[0] - sum);
    cout << ' ' << p << ' ' << arr[n * 2 - 1] << endl;
}
 
int main() {
    bismillah;
    int T;
    cin >> T;
    while (T--) {
        raihan();
    }
    return 0;
}