///   ***   ---   ||         ALLAHU AKBAR        |||   ---   ***   ///
 
 
 
#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
 
#define endl '
'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define nl cout<<endl
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
 
int dx[] = { 0, 0, +1, -1, -1,  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
 
 
 
 
int main()
{
    bismillah;
    int n;
	string s, t;
	cin >> n >> s >> t;
 
	vector<int> ans;
	for (int i = 0; i < n; ++i) {
		if (s[i] == t[i]) continue;
		int pos = -1;
		for (int j = i + 1; j < n; ++j) {
			if (s[j] == t[i]) {
			        pos = j;
			        break;
			}
		}
		if (pos == -1) {
			cout << -1 << endl;
			return 0;
		}
		for (int j = pos - 1; j >= i; --j) {
			swap(s[j], s[j + 1]);
			ans.push_back(j);
		}
	}
 
	assert(s == t);
 
	cout << ans.size() << endl;
	for (auto it : ans) cout << it + 1 << " ";
	cout << endl;
 
 
 
    return 0;
}
 