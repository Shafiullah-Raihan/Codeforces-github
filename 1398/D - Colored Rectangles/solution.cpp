///   ***   ---         ||    ALLAHU AKBAR        |||   ---   ***   ///
 
 
 
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
#define clz(x)          __builtin_clz(x) /// count leading zeros of 32 bits.
                                         ///like 4=00000000....100(leading 29 ta)
#define ctz(x)          __builtin_ctz(x) ///count trailing zeros
#define popcount(x)     __builtin_popcount(x)    ///count number of ones's(bits)
 
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
 
 
 
const int N = 210;
 
ll r[N],g[N],b[N];
ll dp[N][N][N];
 
bool cmp(ll x, ll y)
{
    return x>y;
}
 
void raihan()
{
    ll n,m,t,ans=0;
 
    cin>>n>>m>>t;
 
    for(int i=1;i<=n;i++)
        cin>>r[i];
 
    sort(r+1,r+1+n,cmp);
 
    for(int i=1;i<=m;i++)
        cin>>g[i];
 
    sort(g+1,g+1+m,cmp);
 
    for(int i=1;i<=t;i++)
        cin>>b[i];
 
    sort(b+1,b+1+t,cmp);
 
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=t;k++)
            {
                ans=max(ans,dp[i][j][k]);
 
                if(i<n && j<m)
                    dp[i+1][j+1][k]=max(dp[i+1][j+1][k],dp[i][j][k]+r[i+1]*g[j+1]);
 
                if(j<m && k<t)
                    dp[i][j+1][k+1]=max(dp[i][j+1][k+1],dp[i][j][k]+b[k+1]*g[j+1]);
 
                if(i<n && k<t)
                    dp[i+1][j][k+1]=max(dp[i+1][j][k+1],dp[i][j][k]+r[i+1]*b[k+1]);
            }
        }
    }
 
    cout<<ans<<'
';
}
 
int main()
{
    bismillah;
    ll T=1;
    for(ll tt=1;tt<=T;tt++)
    {
        raihan();
    }
 
 
    return 0;
}