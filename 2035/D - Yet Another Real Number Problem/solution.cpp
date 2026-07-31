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
 
 
 
const ll N = 2e5+5;
 
ll n, x, y, t, s, a[N], b[N], i;
 
ll qp(ll x, ll y)
{
    ll z=1;
    for(;y;y>>=1,x=x*x%MOD)
        if(y&1)
            z=z*x%MOD;
    return z;
}
 
void raihan()
{
    cin>>n;
    s=t=0;
 
    for(i=1;i<=n;i++)
    {
        cin>>x;
        y=0;
 
        while(x%2==0)
            x>>=1,y++;
 
        while(t && (y>31 || a[t]<=(x<<y)))
        {
            (s+=MOD-a[t]*qp(2,b[t])%MOD+a[t])%=MOD;
            y+=b[t];
            t--;
        }
 
        if(y)
            a[++t]=x,b[t]=y;
 
        (s+=x*qp(2,y))%=MOD;
 
        cout<<s<<' ';
    }
 
    cout<<'
';
}
 
int main()
{
    bismillah;
    ll T=1;
    cin>>T;
    for(ll tt=1;tt<=T;tt++)
    {
        raihan();
    }
 
 
    return 0;
}