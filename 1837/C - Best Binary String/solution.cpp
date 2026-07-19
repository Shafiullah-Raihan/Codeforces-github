#include<bits/stdc++.h>
using namespace std;
int main()
{	
	int T;
	cin>>T;
	while(T--)
	{
		string a;
		cin>>a;
		if(a[0]=='?')
		{
		    a[0]='0';
		}
		for(int i=1;i<a.size();i++)
		{
			if(a[i]=='?')
			{
				a[i]=a[i-1];
			}		
		}
		cout<<a<<"
";
	}
}