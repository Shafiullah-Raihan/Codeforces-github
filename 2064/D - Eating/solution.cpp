#include <bits/stdc++.h>
using namespace std;
long long t,n,q,x,a[300000],s[300000],pr[300000][31];
long long hbit(long long x)
{
	long long k=30;
	while(!(x&(1ll<<k))&&k>=0)k--;
	return k;
}
 
int main()
{
	scanf("%lld",&t);
	while(t--)
	   {
	   	scanf("%lld%lld",&n,&q);
	   	for(int i=1;i<=n;i++)
	   	    {
		    scanf("%lld",&a[i]),s[i]=s[i-1]^a[i];
		    for(int j=0;j<=30;j++)pr[i][j]=pr[i-1][j];
		    long long k=hbit(a[i]);
		    for(int j=k;j>=0;j--)pr[i][j]=i;
		    }
		for(int i=1;i<=q;i++)
		    {
		    	scanf("%lld",&x);
		    	long long k=hbit(x),p=n,ans=0;
		    	while(x)
		    	   {
		    	   	if(x<a[p]||p==0)break;
		    	   	if(pr[p][k]<p)ans+=(p-pr[p][k]),x^=(s[p]^s[pr[p][k]]),p=pr[p][k];
		    	   	else ans++,x^=a[p],p--;
		    	   	while(!(x&(1ll<<k))&&k>=0)k--;
				   }
				printf("%lld ",ans);
			}
		printf("
");
	   	}
	return 0;
}