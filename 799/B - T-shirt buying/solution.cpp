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
    int n, m;
    cin >> n;
 
    vi a(n), b(n), c(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];
 
    map<int, priority_queue<int, vector<int>, greater<int>>> mp;
 
    for (int i = 0; i < n; i++) {
        mp[b[i]].push(a[i]);
        mp[c[i]].push(a[i]);
    }
 
    set<int> used;
 
    cin >> m;
    for (int i = 0; i < m; i++) {
        int col;
        cin >> col;
 
        while (!mp[col].empty() && used.count(mp[col].top())) {
            mp[col].pop();
        }
 
        if (!mp[col].empty()) {
            int min_price = mp[col].top();
            cout << min_price << " ";
            used.insert(min_price);
        } else {
            cout << "-1 ";
        }
    }
 
    cout << "
";
 
 
 
    return 0;
}