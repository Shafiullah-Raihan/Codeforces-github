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
 
int L, R, m;
int cnt[1000005];
bool prime[1000005];
 
void init()
{
    for(int i = 2; i <= R; i++)
    {
        bool ok = 1;
        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        prime[i] = ok;
    }
 
    for(int i = 2; i <= R; i++)
        cnt[i] = cnt[i - 1] + prime[i];
}
 
bool check(int x)
{
    for(int i = L; i <= R - x + 1; i++)
    {
        if(cnt[i + x - 1] - cnt[i - 1] < m)
            return true;
    }
    return false;
}
 
void raihan()
{
    cin >> L >> R >> m;
 
    mem(cnt, 0);
    mem(prime, 0);
 
    init();
 
    int l = 1;
    int r = R - L + 1;
 
    while(l <= r)
    {
        int mid = (l + r) / 2;
 
        if(check(mid))
            l = mid + 1;
        else
            r = mid - 1;
    }
 
    if(l > R - L + 1)
        cout << -1 << endl;
    else
        cout << l << endl;
}
 
int main()
{
    bismillah;
 
    raihan();
 
    return 0;
}