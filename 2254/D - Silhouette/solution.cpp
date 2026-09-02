#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
using vi=basic_string<ll>;
const int N=1000000;
ll i,j,k,n,m,t,a[N+50];
map<ll,vi> mp;
 
bool solve(){
	ll lst=0,li=1;
	vi v1;
	if(!mp.count(0))return 0;
	for(auto [w,v]:mp){
		if(!w){
			v1=v; continue;
		}
		k=(w-lst);
		if(k%v1.size())return 0;
		k/=v1.size();
		if(k<li)return 0;
		for(auto x:v1)a[x]=k;
		li=k+1;
		v1=v; lst=w;
	}
	for(auto i:v1)a[i]=li;
	for(i=1;i<=n;i++)cout<<a[i]<<' '; cout<<'
';
	return 1;
}
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n; mp={};
		for(i=1;i<=n;i++) {cin>>k; mp[k]+=i;}
		if(!solve())cout<<"-1
";
	}
}