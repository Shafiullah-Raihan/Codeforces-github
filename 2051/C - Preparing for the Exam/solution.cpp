#include <iostream>
using namespace std;
 
const int N = 3e5 + 5;
 
int a[N], b[N];
bool c[N];
 
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m, k;
		cin >> n >> m >> k;
		for(int i = 1; i <= n; i++) c[i] = false;
		for(int i = 1; i <= m; i++) cin >> a[i];
		for(int i = 1; i <= k; i++)
		{
			cin >> b[i];
			c[b[i]] = true;
		}
		for(int i = 1; i <= m; i++)
		{
			if(k-c[a[i]] >= n-1) cout << '1';
			else cout << '0';
		}
		cout << endl;
	}
	return 0;
}