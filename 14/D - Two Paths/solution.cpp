///   ***   ---         |||    ALLAHU AKBAR        |||   ---   ***   ///
 
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
#define yes             cout<<"YES"<<'
';
#define no              cout<<"NO"<<'
';
#define fr(i,a,n) for(ll i=a;i<n;i++)
#define MAX(x)          *max_element(all(x));
#define MIN(x)          *min_element(all(x));
#define SUM(a)          accumulate(all(a),0LL);
#define clz(x)          __builtin_clz(x)
#define ctz(x)          __builtin_ctz(x)
#define popcount(x)     __builtin_popcount(x)
 
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
 
#define mem(a,b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))
 
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
int dx[] = { 0, 0, +1, -1, -1, +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
 
const int N = 205;
 
vector<int> G[N];
 
struct edge
{
    int u, v;
} E[N];
 
int dp[N], mx, n;
 
void DFS(int u, int fa)
{
    for(auto x : G[u])
    {
        if(x == fa)
            continue;
 
        DFS(x, u);
 
        mx = max(mx, dp[u] + dp[x] + 1);
        dp[u] = max(dp[u], dp[x] + 1);
    }
}
 
int work(int u, int v)
{
    for(int i = 1; i <= n; i++)
        dp[i] = 0;
 
    mx = 0;
    DFS(u, v);
 
    return mx;
}
 
void raihan()
{
    cin >> n;
 
    for(int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;
 
        G[u].PB(v);
        G[v].PB(u);
 
        E[i].u = u;
        E[i].v = v;
    }
 
    int ans = 0;
 
    for(int i = 1; i < n; i++)
    {
        ans = max(ans, work(E[i].u, E[i].v) * work(E[i].v, E[i].u));
    }
 
    cout << ans << endl;
}
 
int main()
{
    bismillah;
 
    ll T = 1;
    // cin >> T;
 
    for(ll tt = 1; tt <= T; tt++)
    {
        raihan();
    }
 
    return 0;
}