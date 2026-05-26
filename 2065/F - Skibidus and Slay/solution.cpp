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
 
 
void raihan()
{
 
    int n;
        cin >> n;
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
 
        vector<vector<int>> adj(n + 1);
        for (int i = 1; i <= n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
 
        vector<char> ans(n + 1, '0');
 
        vector<bool> visited(n + 1, false);
        queue<int> q;
        q.push(1);
        visited[1] = true;
 
        while (!q.empty()) {
            int u = q.front();
            q.pop();
 
            for (int v : adj[u]) {
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
 
                    if (a[u] == a[v]) {
                        ans[a[u]] = '1';
                    }
                }
            }
 
            if (adj[u].size() >= 2) {
                unordered_map<int, int> freq_map;
                for (int v : adj[u]) {
                    freq_map[a[v]]++;
                }
 
                for (auto& entry : freq_map) {
                    if (entry.second >= 2) {
                        ans[entry.first] = '1';
                    }
                }
            }
        }
 
        string output;
        output.resize(n);
        for (int i = 1; i <= n; i++) {
            output[i - 1] = ans[i];
        }
        cout << output << "
";
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
 