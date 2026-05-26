#include <bits/stdc++.h>
using namespace std;
const int N=210000,mod=998244353;
int n,q;
char s[N];
bool a[N];
int pw[N];
struct str{
	int a[N];
	inline void clear(){
		for(int i=1;i<=n;i++)
			a[i]=0;
	}
	inline int lowbit(int x){
		return x&-x;
	}
	inline void p(int x,int z){
		for(int i=x;i<=n;i+=lowbit(i))
			a[i]=(a[i]+z)%mod;
	}
	inline int q(int x){
		int sum=1;
		for(int i=x;i;i-=lowbit(i))
			sum=(sum+a[i])%mod;
		return sum;
	}
	inline int q(int x,int y){
		return (q(y)-q(x-1))%mod;
	}
}dog[2][2];
inline int calc(int x){
	int res=0;
	res=(res+1ll*dog[a[x]^1][0].q(1,x-1)*pw[n-x])%mod;
	res=(res+1ll*dog[a[x]^1][1].q(x+1,n)*pw[x-1])%mod;
	return res;
}
void solve(){
	scanf("%s",s+1);
	n=strlen(s+1);
	for(int i=1;i<=n;i++)
		a[i]=s[i]-'0';
	pw[0]=1;
	for(int i=1;i<=n;i++)
		pw[i]=2*pw[i-1]%mod;
	dog[0][0].clear();
	dog[0][1].clear();
	dog[1][0].clear();
	dog[1][1].clear();
	int ans=(pw[n]-1)%mod;
	for(int i=1;i<=n;i++){
		ans=(ans+calc(i))%mod;
		dog[a[i]][0].p(i,pw[i-1]);
		dog[a[i]][1].p(i,pw[n-i]);
	}
	scanf("%d",&q);
	while(q--){
		int i;
		scanf("%d",&i);
		ans=(ans-calc(i))%mod;
		dog[a[i]][0].p(i,-pw[i-1]);
		dog[a[i]][1].p(i,-pw[n-i]);
		a[i]^=1;
		dog[a[i]][0].p(i,pw[i-1]);
		dog[a[i]][1].p(i,pw[n-i]);
		ans=(ans+calc(i))%mod;
		ans=(ans+mod)%mod;
		printf("%d ",ans);
	}
	puts("");
}
int main(){
	int T;
	scanf("%d",&T);
	while(T--)
		solve();
	return 0;
}