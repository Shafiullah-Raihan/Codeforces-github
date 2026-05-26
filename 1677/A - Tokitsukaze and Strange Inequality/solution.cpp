#include<bits/stdc++.h>
using namespace std;
#define int long long
int t,n,a[100001],b[100001],ans,sum,dp[100001];
signed main()
{
	scanf("%lld",&t);
	while(t--)
	{
		memset(b,0,sizeof(b));
		scanf("%lld",&n);
		for(int i=1;i<=n;i++)
		{
			scanf("%lld",&a[i]);
		}
		ans=0;
		for(int i=2;i<n;i++)
		{
			b[a[i-1]]++;
			for(int j=1;j<=n;j++)
			{
				dp[j]=dp[j-1]+b[j];
			}
			sum=dp[a[i+1]];
			for(int j=i+2;j<=n;j++)
			{
				if(a[i]>a[j])
				{
					ans+=sum;
				}
				sum+=dp[a[j]];
			}
		}
		printf("%lld
",ans);
	}
	return 0;
}