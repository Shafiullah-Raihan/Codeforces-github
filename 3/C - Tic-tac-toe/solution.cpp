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
#define clz(x)          __builtin_clz(x) /// count leading zeros of 32 bits.
                                         ///like 4=00000000....100(leading 29 ta)
#define ctz(x)          __builtin_ctz(x) ///count trailing zeros
#define popcount(x)     __builtin_popcount(x)    ///count number of ones's(bits)
 
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
 
 
 
char c[4][4],a,b;
 
bool check(char ch)
{
    for(int i=1;i<=3;i++)
    {
        if(c[i][1]==c[i][2] && c[i][2]==c[i][3] && c[i][1]==ch)
            return 1;
 
        if(c[1][i]==c[2][i] && c[2][i]==c[3][i] && c[1][i]==ch)
            return 1;
    }
 
    if(c[1][1]==c[2][2] && c[2][2]==c[3][3] && c[1][1]==ch)
        return 1;
 
    if(c[3][1]==c[2][2] && c[2][2]==c[1][3] && c[2][2]==ch)
        return 1;
 
    return 0;
}
 
void raihan()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            cin>>c[i][j];
 
            if(c[i][j]=='X')
                a++;
            else if(c[i][j]=='0')
                b++;
        }
    }
 
    if((a!=b && a!=(b+1))
       || (check('X') && check('0'))
       || (check('0') && a!=b)
       || (check('X') && a!=(b+1)))
    {
        cout<<"illegal
";
    }
    else if(check('X'))
    {
        cout<<"the first player won
";
    }
    else if(check('0'))
    {
        cout<<"the second player won
";
    }
    else if(a!=5)
    {
        if(a==b)
            cout<<"first
";
        else
            cout<<"second
";
    }
    else
    {
        cout<<"draw
";
    }
}
 
int main()
{
    bismillah;
    ll T=1;
 
    for(ll tt=1;tt<=T;tt++)
    {
        raihan();
    }
 
 
    return 0;
}