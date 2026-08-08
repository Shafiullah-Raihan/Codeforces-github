#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
 
int check(int x,vector<int>v)
{
	cout<<"? "<<v.size()+1<<" ";
	cout<<x<<" ";
	for(auto x:v)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	int y;
	cin>>y;
	return y;
}
 
void solve()
{
	int n;
	cin>>n;
	vector<int>v;
	v.push_back(1);
	vector<int>a(n*2+5);
	for(int i=2;i<=n*2;i++)
	{
		int x=check(i,v);
		if(x) a[i]=x;
		else v.push_back(i);
	}
	v.clear();
	for(int i=1;i<=n*2;i++)
	{
		if(a[i]) v.push_back(i);
	}
	for(int i=1;i<=2*n;i++)
	{
		if(a[i]) continue;
		a[i]=check(i,v);
	}
	cout<<"! ";
	for(int i=1;i<=2*n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
 
int main()
{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}