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
 
 
 
void raihan()
{
    int n;
    cin>>n;
 
    vector<vector<double>> v(n,vector<double>(4));
 
    for(int i=0;i<n;i++)
        cin>>v[i][1]>>v[i][2]>>v[i][0]>>v[i][3];
 
    sort(v.begin(),v.end());
 
    vector<double> dp(n);
 
    double ans=0;
 
    for(int i=0;i<n;i++)
    {
        dp[i]=v[i][3];
 
        for(int j=0;j<i;j++)
        {
            if((v[i][1]-v[j][1])*(v[i][1]-v[j][1])+
               (v[i][2]-v[j][2])*(v[i][2]-v[j][2])
               <=
               (v[i][0]-v[j][0])*(v[i][0]-v[j][0]))
            {
                dp[i]=max(dp[i],dp[j]+v[i][3]);
            }
        }
 
        ans=max(ans,dp[i]);
    }
 
    cout<<setprecision(numeric_limits<double>::digits10+1)<<ans<<endl;
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