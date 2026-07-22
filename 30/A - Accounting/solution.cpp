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
 
void raihan()
{
    ll a, b;
    int n;
    cin >> a >> b >> n;
 
    if(a == 0 && b == 0)
    {
        cout << 1 << endl;
        return;
    }
    else if(a == 0)
    {
        cout << "No solution" << endl;
        return;
    }
    else if(b == 0)
    {
        cout << 0 << endl;
        return;
    }
 
    b /= a;
 
    bool neg = false;
 
    if(b < 0)
    {
        b = -b;
        neg = true;
    }
 
    for(ll i = 1; ; i++)
    {
        ll cur = pow(i, n);
 
        if(cur == b)
        {
            cout << (neg ? -i : i) << endl;
            return;
        }
 
        if(cur > b)
        {
            cout << "No solution" << endl;
            return;
        }
    }
}
 
int main()
{
    bismillah;
 
    raihan();
 
    return 0;
}