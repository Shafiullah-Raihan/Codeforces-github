///   ***   ---   |||         ALLAHU AKBAR        |||   ---   ***   ///
 
 
 
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
#define fr(i,a,n) for(ll i=a;i<n;i++)
 
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
const ll mx = 1e5+123;
int c[mx];
vl order;
void dfs(ll src,vvl& adj)
{
    if(c[src] == 2) return ;
    c[src]=1;
    for(ll it:adj[src])
    {
        if(c[it]==1)
        {
            cout<<-1<<endl;exit(0);
        }
        dfs(it,adj);
    }
    order.PB(src);
    c[src]=2;
}
 
void raihan()
{
 
    ll n,k;cin>>n>>k;
    vl necessary(k);
    for(ll i=0;i<k;i++)
    {
        ll temp;cin>>temp;temp--;
        necessary[i] = temp;
    }
    vvl adj(n);
    for(ll i=0;i<n;i++)
    {
        ll m;cin>>m;
        while(m--)
        {
            ll u;cin>>u;u--;adj[i].PB(u);
        }
    }
 
    order.clear();
    for(ll u: necessary)
    {
        dfs(u,adj);
    }
    cout<<order.size()<<endl;
    for(ll it: order)
    {
        cout<<it+1<< " ";
    }
    nl;
 
 
 
 
}
 
 
 
int main()
{
    bismillah;
    raihan();
 
 
 
    return 0;
}
 