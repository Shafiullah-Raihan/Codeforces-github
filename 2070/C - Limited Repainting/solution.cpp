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
 
void raihan() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    int maxPenalty = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        maxPenalty = max(maxPenalty, a[i]);
    }
    auto canAchieve = [&](int X) {
        int segments = 0;
        for (int i = 0; i < n; ) {
            if (s[i] == 'R' && a[i] > X) {
                i++;
                continue;
            }
            bool hasMandatory = false;
            int j = i;
            while (j < n && (s[j] != 'R' || a[j] <= X)) {
                if (s[j] == 'B' && a[j] > X) {
                    hasMandatory = true;
                }
                j++;
            }
            segments += hasMandatory;
            i = j;
        }
        return segments <= k;
    };
    int lo = 0, hi = maxPenalty, ans = maxPenalty;
    while (hi - lo > 2) {
        int mid1 = lo + (hi - lo) / 3;
        int mid2 = hi - (hi - lo) / 3;
        if (canAchieve(mid1)) {
            ans = mid1;
            hi = mid2 - 1;
        } else {
            lo = mid1 + 1;
        }
    }
    for (int i = lo; i <= hi; i++) {
        if (canAchieve(i)) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;
}
 
int main() {
    bismillah;
    int T;
    cin >> T;
    while (T--) {
        raihan();
    }
    return 0;
}