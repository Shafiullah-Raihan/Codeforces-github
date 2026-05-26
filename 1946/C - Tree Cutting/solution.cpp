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
const ll mx= 1e5+123;
vl tree[mx];
ll countGroup,n,m,k;
int dfs(ll node,ll parent,ll mid)
{
    ll cnt =1;
    for(auto child:tree[node])
    {
        if(child== parent) continue;
        cnt += dfs(child,node,mid);
 
    }
    if(cnt>=mid){
            countGroup++;
            return 0;
        }
    return cnt;
}
 
 
void raihan()
{
 
    cin>>n>>k;
    for(ll i=0;i<=n;i++)
    {
        tree[i].clear();
    }
    for(ll i=1;i<n;i++)
    {
        ll u,v;
        cin>>u>>v;
        tree[u].PB(v);
        tree[v].PB(u);
 
    }
    ll left=1,right=n;
    while(left<right)
    {
        ll mid = (right+left+1)>>1;
        countGroup =0;
        dfs(1,-1,mid);
        if(countGroup>k)
        {
            left =mid;
        }
        else{
            right = mid-1;
        }
 
    }
    cout<<left<<endl;
 
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
 