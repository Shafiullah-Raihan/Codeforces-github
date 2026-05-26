#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fi first
#define se second
const ll mod=1e9+7;
int n;
ll a[200005],b[200005];
void solve(){
	cin >> n;
	map<ll,ll>dp;
	dp[0]=1;
	for(int i=1; i<=n ;i++){
		cin >> a[i];
		b[i]=b[i-1]^a[i];
		dp[b[i-1]]=(dp[b[i-1]]*3+dp[b[i-1]^a[i]]*2)%mod;
	}
	ll ans=0;
	for(auto c:dp) ans+=c.se;
	cout << ans%mod << '
';
}
int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int t;cin >> t;
	while(t--) solve();
}