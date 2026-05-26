///   ***   ---   ||         ALLAHU AKBAR        |||   ---   ***   ///
 
 
 
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
 
 
 
 
int main()
{
    bismillah;
    deque<ll>first,second;
    ll n,k1,k2,ans=0;
    cin>>n>>k1;
    for(ll i=1,x;i<=k1;i++)
    {
        cin>>x;
        first.PB(x);
    }
    cin>>k2;
    for(ll i=1,x;i<=k2;i++){
        cin>>x;
        second.PB(x);
    }
 
 
    while(!first.empty() && !second.empty())
    {
        ll firstTop = first.front();first.pop_front();
        ll secondTop = second.front();second.pop_front();
        if(firstTop>secondTop)
        {
            first.PB(secondTop);
            first.PB(firstTop);
            ans++;
        }
        if(firstTop<secondTop)
        {
            second.PB(firstTop);
            second.PB(secondTop);
            ans++;
        }
        if(ans>1000)
        {
            cout<<-1<<endl;
            return 0;
        }
 
    }
    if(!first.empty())
    {
        cout<<ans<< " "<<1<<endl;
    }
    else{
        cout<<ans<< " "<<2<<endl;
    }
 
 
 
    return 0;
}
 