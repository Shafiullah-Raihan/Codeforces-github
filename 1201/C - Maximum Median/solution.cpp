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
 
ll n,k;
vl arr;
 
ll minOperation(ll mid)
{
    ll operation =0;
    for(ll i=n/2;i<n;i++)
    {
        if(arr[i]<mid) operation += (mid-arr[i]);
    }
    return operation;
}
 
int isOk(ll mid)
{
   return minOperation(mid) <=k;
 
 
 
}
 
int main()
{
    bismillah;
 
 
        cin>>n>>k;
        arr.resize(n);
 
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(all(arr));
 
        ll low = arr[n/2],high= arr[n-1]+k;
 
        ll mid,ans=arr[n/2];
        while(low<=high)
        {
             mid = low+(high-low)/2;
            if(isOk(mid)){
                ans = mid;
                low = mid+1;
 
 
            }
            else{
                high = mid-1;
            }
        }
 
 
 
        cout<<ans<<endl;
 
 
 
 
 
    return 0;
}
 