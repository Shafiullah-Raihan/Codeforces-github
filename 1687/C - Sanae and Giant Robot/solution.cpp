#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define sit set<int>::iterator
using namespace std;
int N,M,ql[200050],qr[200050];
ll A[200050],B[200050];
vector<int>vec[200050];set<int>pos;
queue<int>q;bool vis[200050];
int del[200050],tot;
void solve(){
	scanf("%d%d",&N,&M);
	for(int i=1;i<=N;++i)scanf("%lld",&A[i]);
	for(int i=0;i<=N;++i)vec[i].clear();
	for(int i=1;i<=N;++i)scanf("%lld",&B[i]),A[i]+=A[i-1]-B[i];pos.clear();
	for(int i=1;i<=N;++i)if(A[i]!=0)pos.insert(i);
	for(int i=1;i<=M;++i){
		scanf("%d%d",&ql[i],&qr[i]),vec[ql[i]-1].pb(i),vec[qr[i]].pb(i);
		if(A[qr[i]]==0&&A[ql[i]-1]==0)q.push(i),vis[i]=1;else vis[i]=0;
	}
	while(!q.empty()){
		int u=q.front();q.pop();sit it=pos.lower_bound(ql[u]);tot=0;
		for(;it!=pos.end()&&(*it)<=qr[u];++it)del[++tot]=(*it);
		for(int i=1;i<=tot;++i){
			pos.erase(del[i]),A[del[i]]=0;
			for(auto v:vec[del[i]]){
				if(vis[v])continue;
				if(A[qr[v]]==0&&A[ql[v]-1]==0)q.push(v),vis[v]=1;
			}
		}
	}
	if(!pos.size())puts("YES");else puts("NO");
}
int main(){
	int t;cin>>t;
	while(t--)solve();
	return 0;
}