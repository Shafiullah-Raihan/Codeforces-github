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
 
string s;
 
bool f1(int l,int r)
{
    if(r-l+1>16 || r-l+1<1) return 0;
 
    for(int i=l;i<=r;i++)
    {
        if(s[i]>='A' && s[i]<='Z') continue;
        if(s[i]>='a' && s[i]<='z') continue;
        if(s[i]>='0' && s[i]<='9') continue;
        if(s[i]=='_') continue;
        return 0;
    }
 
    return 1;
}
 
bool f2(int l,int r)
{
    int x=l;
 
    for(int i=l;i<=r;i++)
    {
        if(s[i]=='.' && f1(x,i-1)==0)
            return 0;
 
        if(s[i]=='.')
            x=i+1;
    }
 
    return f1(x,r);
}
 
void raihan()
{
    cin>>s;
 
    int t1=0,t2=0;
 
    for(int i=1;i<sz(s);i++)
    {
        if(s[i]=='@') t1++;
        else if(s[i]=='/') t2++;
    }
 
    if(t1>1 || t2>2)
    {
        cout<<"NO"<<endl;
        return;
    }
 
    int k=0;
    int flag=0;
 
    for(int i=0;i<sz(s);i++)
    {
        if(s[i]=='@')
        {
            k=i-1;
            flag+=f1(0,k);
        }
        else if(s[i]=='/')
        {
            flag+=f2(k+2,i-1);
 
            if(t2==1)
                flag+=f1(i+1,sz(s)-1);
        }
    }
 
    if(t2==0)
        flag+=f2(k+2,sz(s)-1);
 
    if(t2==1 && flag==3)
        cout<<"YES"<<endl;
    else if(t2==0 && flag==2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
int main()
{
    bismillah;
 
    ll T = 1;
    // cin >> T;
 
    for(ll tt=1;tt<=T;tt++)
    {
        raihan();
    }
 
    return 0;
}