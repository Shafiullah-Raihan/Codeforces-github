#include <iostream>
#include <vector>
#include <cstring>
 
using namespace std;
 
class BipartiteMatching {
public:
    vector<int>* adj;
    vector<int> pairU, pairV;
    vector<bool> visited;
    int m, n;
 
    BipartiteMatching(int m, int n) {
        this->m = m;
        this->n = n;
        adj = new vector<int>[m];
        pairU.resize(m, -1);
        pairV.resize(n, -1);
        visited.resize(m, false);
    }
 
    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }
 
    bool dfs(int u) {
        if (visited[u]) return false;
        visited[u] = true;
 
        // Try to find an augmenting path for u
        for (int v : adj[u]) {
            if (pairV[v] == -1 || dfs(pairV[v])) {
                pairU[u] = v;
                pairV[v] = u;
                return true;
            }
        }
        return false;
    }
 
    int maxMatching() {
        int result = 0;
        for (int u = 0; u < m; u++) {
            visited.assign(m, false);  // Reset visited array for each DFS call
            if (dfs(u)) {
                result++;
            }
        }
        return result;
    }
};
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
 
        vector<vector<int>> revPrefix(n, vector<int>(n + 1, 0));
        for (int i = 0; i < n; i++) {
            for (int v = 1; v <= n; v++) {
                revPrefix[i][v] = revPrefix[i][v - 1] + a[i][n - v];
            }
        }
 
        vector<vector<int>> queuesForV(n + 1);
        vector<bool> possibleV(n + 1, false);
        for (int v = 0; v <= n; v++) {
            for (int i = 0; i < n; i++) {
                if (revPrefix[i][v] == v) {
                    queuesForV[v].push_back(i);
                    possibleV[v] = true;
                }
            }
        }
 
        int answer = 0;
        for (int m = n; m >= 0; m--) {
            if (m == 0) {
                answer = 0;
                break;
            }
            bool valid = true;
            for (int v = 0; v < m; v++) {
                if (v > n || !possibleV[v]) {
                    valid = false;
                    break;
                }
            }
            if (!valid) continue;
 
            BipartiteMatching bm(m, n);
            for (int v = 0; v < m; v++) {
                for (int q : queuesForV[v]) {
                    bm.addEdge(v, q);
                }
            }
 
            int match = bm.maxMatching();
            if (match == m) {
                answer = m;
                break;
            }
        }
 
        cout << answer << endl;
    }
 
    return 0;
}