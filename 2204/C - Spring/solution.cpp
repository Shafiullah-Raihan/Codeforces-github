#include <bits/stdc++.h>
using namespace std;
using ll=long long;
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
	int t;
	cin>>t;
	while(t--){
	ll a,b,c,m;
    cin>>a>>b>>c>>m;
    ll ab=lcm(a,b),ac=lcm(a,c),bc=lcm(b,c),abc=lcm(ab,c);
    ll wa=6*(m/a)-3*(m/ab)-3*(m/ac)+2*(m/abc);
    ll wb=6*(m/b)-3*(m/ab)-3*(m/bc)+2*(m/abc);
    ll wc=6*(m/c)-3*(m/ac)-3*(m/bc)+2*(m/abc);
    cout<<wa<<" "<<wb<<" "<<wc<<"
";
    }
}