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
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
 
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
 
int dx[] = { 0, 0, +1, -1, -1,  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
 
 
const int N = 2e5 + 4;
const int MOD2 = 998244353;
 
 
int inv(int x)
{
    int a = 1, t = MOD2 - 2;
    for(; t; t >>= 1, x = (ll)x * x % MOD2)
        if(t & 1)
            a = (ll)a * x % MOD2;
    return a;
}
 
 
int n, m;
int r[N], w[N], f[N];
vector<int> v[N];
 
 
void raihan()
{
    cin >> n >> m;
 
    f[0] = 1;
 
    for(int i = 0, l, p, q; i < n; i++)
    {
        cin >> l >> r[i] >> p >> q;
 
        p = (ll)p * inv(q) % MOD2;
 
        v[l].PB(i);
 
        f[0] = (ll)f[0] * (MOD2 + 1 - p) % MOD2;
 
        w[i] = (ll)p * inv(MOD2 + 1 - p) % MOD2;
    }
 
    for(int i = 1; i <= m; i++)
    {
        for(auto j : v[i])
        {
            (f[r[j]] += (ll)f[i-1] * w[j] % MOD2) %= MOD2;
        }
    }
 
    cout << f[m] << endl;
}
 
 
int main()
{
    bismillah;
 
    ll T = 1;
 
    for(ll tt = 1; tt <= T; tt++)
    {
        raihan();
    }
 
 
    return 0;
}