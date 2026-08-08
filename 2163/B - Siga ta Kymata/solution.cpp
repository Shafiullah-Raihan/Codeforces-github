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
 
 
ll gcd(ll a,ll b){ return __gcd(a,b); }
ll lcm(ll a,ll b){ return a*(b/gcd(a,b)); }
 
 
int dx[] = { 0, 0, +1, -1, -1, +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
 
 
void raihan()
{
    int n;
    cin>>n;
 
    vi p(n);
 
    for(int i=0;i<n;i++)
        cin>>p[i];
 
    string x;
    cin>>x;
 
    int p_1,p_n;
 
    for(int i=0;i<n;i++)
    {
        if(p[i]==1)
            p_1=i;
 
        if(p[i]==n)
            p_n=i;
    }
 
    if(x[0]=='0' && x[n-1]=='0' && x[p_1]=='0' && x[p_n]=='0')
    {
        cout<<"5"<<endl;
 
        cout<<p_1+1<<" "<<n<<endl;
        cout<<1<<" "<<p_n+1<<endl;
        cout<<1<<" "<<p_1+1<<endl;
        cout<<p_n+1<<" "<<n<<endl;
 
        if(p_1>p_n)
            cout<<p_n+1<<" "<<p_1+1<<endl;
        else
            cout<<p_1+1<<" "<<p_n+1<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
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