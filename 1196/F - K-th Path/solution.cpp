// LUOGU_RID: 146715173
#include<bits/stdc++.h>
#define int long long
using namespace std;
const int M=2e5+10;
struct node{
	int x,y,wei;
}e[M];
bool cmp(node s1,node s2){
	return s1.wei<s2.wei;
}
int n,m,k,rcnt,cnt,a[810][810],d[810*810],c[M],p[M];
signed main(){
	cin>>n>>m>>k;
	memset(a,0x3f,sizeof a);
	for(int i=1;i<=m;i++)
		cin>>e[i].x>>e[i].y>>e[i].wei;
	sort(e+1,e+1+m,cmp);
	for(int i=1;i<=k;i++)
		c[e[i].x]=c[e[i].y]=1;
	for(int i=1;i<=n;i++)
		p[i]=p[i-1]+c[i];
	cnt=p[n];
	for(int i=1;i<=k;i++)
		a[p[e[i].x]][p[e[i].y]]=e[i].wei,
		a[p[e[i].y]][p[e[i].x]]=e[i].wei;
	for(int u=1;u<=cnt;u++)
		for(int i=1;i<=cnt;i++)
			for(int j=1;j<=cnt;j++)
                a[i][j]=min(a[i][j],a[i][u]+a[u][j]);
    for(int i=1;i<=cnt;i++)
    	for(int j=i+1;j<=cnt;j++)
            d[++rcnt]=a[i][j];
    sort(d+1,d+1+rcnt);
    cout<<d[k];
	return 0;
}