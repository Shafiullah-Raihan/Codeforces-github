#include<bits/stdc++.h>
using namespace std;
const string ans="1 2 2 3 3 4 4 5 5 1 6 6 7 7 8 8 9 9 10 10 11 11 12 13 13 1 12 ";
void solve()
{
	int n;
	cin>>n;
	if(n%2==0)
	{
		for(int i=1;i<=n/2;i++)
			cout<<i<<" "<<i<<" ";
		cout<<endl;
		return ;
	}
	if(n<27)
	{
		cout<<-1<<endl;
		return ;
	}
	cout<<ans;
	for(int i=14;i<=n/2;i++)
		cout<<i<<" "<<i<<" ";
	cout<<endl;
}
int main()
{
	ios::sync_with_stdio(false);
	int T;
	cin>>T;
	for(int i=1;i<=T;i++)solve();
	return 0;
}