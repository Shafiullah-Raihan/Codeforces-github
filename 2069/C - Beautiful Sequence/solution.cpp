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
#define MOD 998244353
 
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
 
#define bismillah ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
 
ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
 
int dx[] = { 0, 0, +1, -1, -1,  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };
 
ll mod_pow(ll base, ll exponent, int mod) {
    ll result = 1;
    base = base % mod;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % mod;
        exponent = exponent / 2;
        base = (base * base) % mod;
    }
    return result;
}
 
int mod_inv(int a, int mod) {
    return mod_pow(a, mod - 2, mod);
}
 
int main() {
    bismillah;
    int T;
    cin >> T;
    const int MAX = 200000 + 123;
    while (T--) {
        int n;
        cin >> n;
        ll result = 0;
        ll totalOnes = 0;
        map<int, int> counterMap;
        counterMap[1] = 0;
        counterMap[2] = 0;
        int inverseTwo = mod_inv(2, MOD);
        for (int i = 0; i < n; i++) {
            int number;
            cin >> number;
            if (number == 1) {
                ll inversePowerOfTwo = mod_pow(inverseTwo, counterMap[2], MOD);
                ll temp1 = totalOnes + inversePowerOfTwo;
                totalOnes = temp1% MOD;
                counterMap[1]++;
            }
            else if (number == 2) {
                counterMap[2]++;
            }
            else if (number == 3) {
                ll powerOfTwo = mod_pow(2, counterMap[2], MOD);
                ll temp1 = powerOfTwo * totalOnes % MOD ;
                ll temp2 = counterMap[1];
                ll contribution = (temp1 - temp2) % MOD;
                if (contribution < 0) contribution += MOD;
                result = (result + contribution) % MOD;
            }
        }
        cout << result << endl;
    }
    return 0;
}