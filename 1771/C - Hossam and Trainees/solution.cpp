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
const ll infLL = 9000000000000000000LL;
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
 
const int N = 32170;
 
int n;
set<int> mp;
int prime[N], tot;
 
void raihan()
{
    mp.clear();
 
    cin >> n;
 
    bool f = false;
 
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
 
        for(int j = 1; j <= tot && prime[j] <= x / prime[j]; j++)
        {
            if(x % prime[j] == 0)
            {
                f |= !mp.insert(prime[j]).second;
 
                while(x % prime[j] == 0)
                    x /= prime[j];
            }
        }
 
        if(x > 1)
            f |= !mp.insert(x).second;
    }
 
    if(f)
        yes
    else
        no
}
 
int main()
{
    bismillah;
 
    for(int i = 2; i <= 32166; i++)
    {
        bool f = true;
 
        for(int j = 2; j <= i / j; j++)
        {
            if(i % j == 0)
            {
                f = false;
                break;
            }
        }
 
        if(f)
            prime[++tot] = i;
    }
 
    ll T;
    cin >> T;
 
    while(T--)
    {
        raihan();
    }
 
    return 0;
}