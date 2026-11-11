#include<bits/stdc++.h>
using namespace std;
int t,n,x,p;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		cout.flush();
		cout<<"? "<<1<<" "<<n<<'
'; 
		cin>>x;
		if(x==0||x==n)
		{
			cout<<"! NO"<<'
';
			continue;
		}
		p=x;
		cout.flush();
		cout<<"? "<<1<<" "<<p<<'
';
		cin>>x;
		if(x==p)
			cout<<"! NO"<<'
';
		else
			cout<<"! YES"<<'
';
	}
	return 0;
}