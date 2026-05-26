///   ***   ---   |         ALLAHU AKBAR        |||   ---   ***   ///
 
 
 
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
 
bool isOk(ll mid,vl& needForOne,vl& have,ll k,ll n)
 
    {
 
        ll cnt = k,ans=0;
        for(ll i=0;i<n;i++)
        {
            if(mid*needForOne[i]>have[i])
            {
                ans+=(mid*needForOne[i] - have[i]);
            }
        }
        if(ans<=cnt){
            return true;
        }
        else{
            return false;
        }
 
 
    }
 
 
void raihan()
{
 
    ll n,k;
    cin>>n>>k;
    vl needForOne(n),have(n);
    for(ll i=0;i<n;i++) cin>>needForOne[i];
    for(ll i=0;i<n;i++) cin>>have[i];
    ll left =0,right = 1e10,mid;
    while(left<right)
    {
        mid = left+(right-left+1)/2;
        if(isOk(mid,needForOne,have,k,n))
        {
            left = mid;
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
    raihan();
 
 
 
    return 0;
}
 