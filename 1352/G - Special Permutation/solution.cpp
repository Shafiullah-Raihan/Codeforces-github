#include<bits/stdc++.h>
#define int long long
using namespace std;
int a[200010];
int sum[200010];
signed main()
{
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n<=3)
		{
			cout<<"-1
";
			continue;
		}
		int x=n-(1-n%2);
		for(int i=x;i>=1;i-=2) cout<<i<<' ';
		cout<<"4 2 ";
		for(int i=6;i<=n;i+=2) cout<<i<<' ';
		cout<<'
';
	}
	return 0;
}