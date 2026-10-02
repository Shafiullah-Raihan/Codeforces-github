#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200000;
int T,n,m,a[N+5],s[N+5],c[N+5],pw;
ll sum,cur,ans;
void solve(){
	scanf("%d%d",&n,&m),pw=1,sum=0;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i],++c[a[i]];
	}
	for(int i=1;i<=m;i++) s[i]=s[i-1]+c[i];
	for(int i=1;i<=m;i++){
		if((pw<<1)>=m){
			printf("%lld ",sum);
			continue;
		}
		pw<<=1,ans=0;
		for(int j=1;(j<<i)<=m;j++){
			cur=c[j<<i];
			for(int k=j;k<=m;k+=j)
				cur+=(s[min(m,k+j-1)]-s[k-1])*min(k/j,pw-1);
			ans=max(ans,cur);
		}
		printf("%lld ",ans);
	}
	printf("
");
	for(int i=1;i<=m;i++) c[i]=0;
}
int main(){
	scanf("%d",&T);
	while(T--) solve();
	return 0;
}