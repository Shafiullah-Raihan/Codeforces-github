#include<bits/stdc++.h>
#define int long long
using namespace std;
 
void solve()
{
	int n;
	string s;
	cin >> n >> s;
	int y = 0,x;
	for(int i = 0;i < s.size();i++)
	{
		if(s[i] == '0') y++;
	}
	x = n - y;
	for(int i = (1ll << x);i <= (1ll << n) - (1ll << y) + 1;i++) cout << i << " ";
	cout << '
';
}
 
signed main()
{
	solve();
}