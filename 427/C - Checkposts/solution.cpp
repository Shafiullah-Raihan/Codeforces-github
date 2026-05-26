#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define mx 30000
using namespace std;
 
vector<ll> a[100005], b[100005];  
ll n, cost[100005], e, ways = 1, ans = 0, mn;
map<ll, ll> vis1, vis2, f;  
stack<ll> s; 
 
void dfs1(ll i) {
    vis1[i] = 1;
    for (auto x : a[i]) {
        if (vis1[x] == 0) {
            dfs1(x);
        }
    }
    s.push(i);
}
 
 
void dfs2(ll i) {
    vis2[i] = 1;
    mn = min(mn, cost[i]);
    f[cost[i]]++;
    for (auto x : b[i]) {
        if (vis2[x] == 0) {
            dfs2(x);
        }
    }
}
 
int main() {
    cin >> n;
    for (ll i = 1; i <= n; i++) {
        cin >> cost[i];
    }
 
    cin >> e;
    for (ll i = 0; i < e; i++) {
        ll x, y;
        cin >> x >> y;
        a[x].push_back(y); 
        b[y].push_back(x);  
    }
 
    for (ll i = 1; i <= n; i++) {
        if (vis1[i] == 0) {
            dfs1(i);
        }
    }
 
    while (s.size()) {
        ll tp = s.top();
        s.pop();
        if (vis2[tp]) continue;
 
        mn = mod;  
        f.clear(); 
        dfs2(tp);  
 
        ans += mn;  
        ways = (ways * f[mn]) % mod;  
    }
 
    cout << ans << " " << ways << "
";  
    return 0;
}