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
 
struct Cmp
{
    bool operator()(const pair<ll, pll> &a, const pair<ll, pll> &b)
    {
        if(a.F == b.F){
            return (a.S.F>b.S.F);
        }
        return a.F < b.F;
    }
};
 
void raihan()
{
 
    ll n;cin>>n;
    vl ans(n+1);
    priority_queue<pair<ll,pll>,vector<pair<ll,pll>>,Cmp>pq;
    pq.push({n,{1,n}});
    for(ll i=1;i<=n;i++)
    {
        auto p = pq.top();
        pq.pop();
        ll start = p.S.F;
        ll finish = p.S.S;
        ll pos = (start+finish)/2;
        ans[pos] = i;
        if(start <= (pos-1))
        {
            pq.push({pos-start,{start,pos-1}});
        }
        if(pos+1<= finish)
        {
            pq.push({finish-pos,{pos+1,finish}});
        }
    }
    for(ll i=1;i<=n;i++)
    {
        cout<< ans[i]<< " ";
    }
    nl;
 
 
}
 
 
 
 
int main()
{
    bismillah;
    int T;
    cin>>T;
    while(T--)
    {
        raihan();
    }
 
 
    return 0;
}
 