#include<bits/stdc++.h>
using namespace std;
int t,n,m,i,j,a,d,k,f[11][200005];
inline int F(int k,int x){
	if(x!=f[k][x])f[k][x]=F(k,f[k][x]);
	return f[k][x];
}
inline void M(int k,int x,int y){
	x=F(k,x),y=F(k,y);
	if(x>y)f[k][y]=x;
	else f[k][x]=y;
}
int main(){ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	for(cin>>t;t--;){cin>>n>>m;
		for(i=0;i<11;i++)for(j=0;j++<n;)f[i][j]=j;
		for(;m--;){cin>>a>>d>>k;
			for(i=a+d;i<=a+d*k;i=F(d,i+d)){
				M(d,i-d,i);if(i+d>a+d*k)break;
				M(d,i,i+d);
			}
		}for(i=0;++i<11;)for(j=0;j++<n;)M(0,F(i,j),j);
		for(i=a=0;i++<n;)a+=F(0,i)==i;cout<<a<<endl;
	}
}