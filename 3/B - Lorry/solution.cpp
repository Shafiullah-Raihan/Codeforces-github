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
 
pair<int,int> a[3][100001];
int l[3], s[3][100001];
 
bool cmp(pii x, pii y)
{
    return x.F > y.F;
}
 
void raihan()
{
    int n, v;
    cin >> n >> v;
 
    mem(l, 0);
    mem(s, 0);
 
    int t, p;
 
    for(int i = 1; i <= n; i++)
    {
        cin >> t >> p;
        a[t][++l[t]] = {p, i};
    }
 
    sort(a[1] + 1, a[1] + l[1] + 1, cmp);
    sort(a[2] + 1, a[2] + l[2] + 1, cmp);
 
    for(int i = 1; i <= l[1]; i++)
        s[1][i] = s[1][i - 1] + a[1][i].F;
 
    for(int i = 1; i <= l[2]; i++)
        s[2][i] = s[2][i - 1] + a[2][i].F;
 
    int ans = 0, sum = 0, id = 0;
 
    for(int i = 0; i <= l[1]; i++)
    {
        if(v - i < 0)
            break;
 
        ans = s[1][i];
        ans += s[2][min(l[2], (v - i) / 2)];
 
        if(sum < ans)
        {
            sum = ans;
            id = i;
        }
    }
 
    cout << sum << endl;
 
    for(int i = 1; i <= id; i++)
        cout << a[1][i].S << " ";
 
    for(int i = 1; i <= min(l[2], (v - id) / 2); i++)
        cout << a[2][i].S << " ";
 
    cout << endl;
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