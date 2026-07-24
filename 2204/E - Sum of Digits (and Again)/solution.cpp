#include <bits/stdc++.h>
using namespace std;
int _;
string s;
int main()
{
	cin>>_;
	while(_--)
	{
		cin>>s;
		int len=s.size();
		if(len==1)
		{
			cout<<s<<endl;
			continue;
		}
		int a[58]={0};
		for(char c:s)
		{
			a[c]++;
		}
		for(int i=1;i<=9*len;i++)
		{
			string ans=to_string(i);
			int x=i,sum=0;
			while(x>9)
			{
				while(x)
				{
					sum+=x%10;
					x/=10;
				}
				x=sum;
				ans+=to_string(sum);
				sum=0;
			}
			int b[58]={0};
			for(char c:ans)
			{
				b[c]++;
			}
			bool flag=true;
			for(int i=48;i<=57;i++)
			{
				if(b[i]>a[i])
				{
					flag=false;
					break;
				}
			}
			if(!flag)continue;
			int tot=0;
			vector<pair<int,int>>c;
			for(int i=48;i<=57;i++)
			{
				int cnt=a[i]-b[i];
				tot+=(i-'0')*cnt;
				c.push_back({i-'0',cnt});
			}
			if(tot==i)
			{
				for(int i=c.size()-1;i>=0;i--)
				{
					while(c[i].second--)
					{
						cout<<c[i].first;
					}
				}
				cout<<ans<<'
';
				break;
			}
		}
	}
}