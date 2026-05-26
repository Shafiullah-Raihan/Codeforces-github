#include <bits/stdc++.h>
using namespace std;
using ll =long long;
using ld =long double;
const int N=1e5;
 
 
inline void solve() {
	int n; cin >> n;
	vector<ll>a(n+1),dp1(n+1,-1e9-1),dp2(n+1,-1e9-1);
	ll sum=0;
	for(int i=1;i<=n;i++) {
		cin >> a[i],sum+=a[i];
	}
	for(int i=2;i<=n;i++){
		dp1[i]=max(dp1[i-1]+a[i],a[i]);
	}
	for(int i=1;i<n;i++)
		dp2[i]=max(dp2[i-1]+a[i],a[i]);
	ll ans=-1e9;
	for(int i=1;i<=n;i++){
		ans=max({ans,dp1[i],dp2[i]});
	}
    if(ans >= sum){
		cout << "NO"<<'
';
	}
	else cout << "YES"<<'
';
}
 
int main() {
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int T = 1;
	std::cin >> T;
	while (T--) solve();
	return 0;
}