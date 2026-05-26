#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 500000
 
int i,j,k,n,m,t,sz[N+50],res;
 
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>t;
	while(t--){
		cin>>n;
		map<pair<int,int>,int > mp; res=0;
		vector<pair<int,int> > q;
		for(i=1;i<n;i++){
			cin>>j>>k; sz[j]++; sz[k]++;
			mp[{j,k}]=mp[{k,j}]=1;
		}
		for(i=1;i<=n;i++)q.push_back({sz[i],i});
		sort(q.rbegin(),q.rend());
		if(n>=4)q.resize(4);
		for(auto [a,b]:q)for(int d=1;d<=n;d++)if(b!=d){
			res=max(res,a+sz[d]-1-!!mp.count({b,d}));
		}
		cout<<res<<'
';
		for(i=1;i<=n;i++)sz[i]=0;
	}
}