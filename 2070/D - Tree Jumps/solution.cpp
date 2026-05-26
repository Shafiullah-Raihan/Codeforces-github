#include <bits/stdc++.h>
using namespace std;
 
#define MOD 998244353
#define bismillah ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
void dfs(int node, int par, vector<int>& depth, vector<vector<int>>& adj, int& maxDepth) {
    for (int child : adj[node]) {
        if (child == par) continue;
        depth[child] = depth[node] + 1;
        maxDepth = max(maxDepth, depth[child]);
        dfs(child, node, depth, adj, maxDepth);
    }
}
 
void raihan() {
    int n;
    cin >> n;
 
    vector<int> parent(n + 1);
    vector<vector<int>> adj(n + 1);
 
    for (int i = 2; i <= n; i++) {
        cin >> parent[i];
        adj[parent[i]].push_back(i);
    }
 
    vector<int> depth(n + 1, 0);
    int maxDepth = 0;
    dfs(1, -1, depth, adj, maxDepth);
 
    vector<vector<int>> levels(maxDepth + 1);
    for (int i = 1; i <= n; i++) {
        levels[depth[i]].push_back(i);
    }
 
    vector<long long> dp(n + 1, 0);
    dp[1] = 1;
 
    vector<long long> S(maxDepth + 1, 0);
    S[0] = 1;
 
    for (int d = 1; d <= maxDepth; d++) {
        long long sumLevel = 0;
        for (int v : levels[d]) {
            int par = parent[v];
            dp[v] = (par != 1) ? (S[d - 1] - dp[par] + MOD) % MOD : S[d - 1] % MOD;
            sumLevel = (sumLevel + dp[v]) % MOD;
        }
        S[d] = sumLevel;
    }
 
    long long ans = 0;
    for (int d = 0; d <= maxDepth; d++) {
        ans = (ans + S[d]) % MOD;
    }
 
    cout << ans << "
";
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