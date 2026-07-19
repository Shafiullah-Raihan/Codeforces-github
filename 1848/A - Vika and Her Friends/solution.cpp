#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long T,n,m,k,q,w,sx,sy,flag=0;
	cin>>T;
	while(T--)
	{
		flag=0;
		cin>>n>>m>>k>>sx>>sy;
		while(k--)
		{
			cin>>q>>w;
			if((q+w+sx+sy)%2==0)
				flag++;
		}
		if(flag==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl; 
	}
	return 0;
}
 