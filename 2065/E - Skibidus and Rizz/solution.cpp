#include<bits/stdc++.h>
using namespace std;
long long int t,n,m,k;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>k;
		if(max(n,m)<k||abs(n-m)>k) cout<<-1<<'
';
		else
		{
			if(n>m)
			{
				for(int i=0;i<k;++i) cout<<0;
				for(int i=0;i<n-k;++i) cout<<1<<0;
				for(int i=n-k;i<m;++i) cout<<1;
				cout<<'
';
			}
			else
			{
				for(int i=0;i<k;++i) cout<<1;
				for(int i=0;i<m-k;++i) cout<<0<<1;
				for(int i=m-k;i<n;++i) cout<<0;
				cout<<'
';
			}
		}
	}
	return 0;
}