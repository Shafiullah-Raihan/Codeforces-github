#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
vector<int>e[N];
int vis[N],s[3],flag;
void dfs(int now,int c){
	if(vis[now]){
		if(vis[now]!=c) flag=1;
		return;
	}
	vis[now]=c;
	s[c]++;
	for(int i:e[now]) dfs(i,3-c);
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int T;
	cin>>T;
	while(T--){
		int n,m,ans=0;
		cin>>n>>m;
		for(int i=1;i<=n;i++){
			e[i].clear();
			vis[i]=0;
		}
		while(m--){
			int x,y;
			cin>>x>>y;
			e[x].push_back(y);
			e[y].push_back(x);
		}
		for(int i=1;i<=n;i++) if(!vis[i]){
			flag=s[1]=s[2]=0;
			dfs(i,1);
			if(!flag) ans+=max(s[1],s[2]);
		}
		cout<<ans<<'
';
	}
}