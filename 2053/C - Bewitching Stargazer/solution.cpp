///   ***   ---   ||         ALLAHU AKBAR        |||   ---   ***   ///
 
 
 
#include<bits/stdc++.h>
using namespace std;
 
 
typedef long long  ll;
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
 
 
pair<ll, int> calculateLucky(ll start, ll end, int limit) {
    if (end - start + 1 < limit) {
        return {0, 0};
    }
    if (end - start + 1 == 1) {
        return {start, 1};
    }
    ll midpoint = start + (end - start) / 2;
    if ((end - start + 1) % 2) {
        pair<ll, int> leftResult = calculateLucky(start, midpoint - 1, limit);
        ll luckySum = midpoint + 2 * leftResult.first + midpoint * leftResult.second;
        int segmentCount = 2 * leftResult.second + 1;
        return {luckySum, segmentCount};
    } else {
        pair<ll, int> leftResult = calculateLucky(start, midpoint, limit);
        ll luckySum = 2 * leftResult.first + midpoint * leftResult.second;
        int segmentCount = 2 * leftResult.second;
        return {luckySum, segmentCount};
    }
}
 
int main()
{
    bismillah;
    int T;
    cin >> T;
    while (T--) {
        ll n, k;
        cin >> n >> k;
        pair<ll, int> result = calculateLucky(1, n, k);
        cout << result.first << "
";
    }
 
 
 
    return 0;
}
 