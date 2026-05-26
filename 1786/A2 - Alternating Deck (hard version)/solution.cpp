#include <bits/stdc++.h>
using namespace std;
 
typedef long long LL;
const int N=2e5+10;
void solve()
{
	int n;cin>>n;
	int a1=1,a2=0,b1=0,b2=0;
	int sum=1;
	for (int i=2;i<=N;i+=2)
	{
		if ((i/2)%2==1)
		{
			int x;
			if (sum+i*2+1>=n)
				x=n-sum;
			else 
				x=i*2+1;
			b1+=x/2;
			b2+=x/2;
			if (x%2==1&&sum%2==1)
				b2++;
			else if (x%2==1&&sum%2==0)
				b1++;	
			sum+=x;
		}
		else 
		{
			int x;
			if (sum+i*2+1>=n)
				x=n-sum;
			else 
				x=i*2+1;
			a1+=x/2;
			a2+=x/2;
			if (x%2==1&&sum%2==1)
				a2++;
			else if (x%2==1&&sum%2==0)
				a1++;	
			sum+=x;
		}
	}
	cout<<a1<<" "<<a2<<" "<<b1<<" "<<b2<<"
";
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	int T;cin>>T;
	while(T--) solve();
	return 0;
}
	 		    	   				  				 		  	  	