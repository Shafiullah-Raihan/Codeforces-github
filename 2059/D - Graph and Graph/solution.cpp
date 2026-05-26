#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t; cin >> t;
    while (t--) {
        int n, s1, s2;
        cin >> n >> s1 >> s2;
        s1--; s2--;
 
        vector<deque<int>> adj1(n);
        int m1; cin >> m1;
        for (int i = 0; i < m1; i++) {
            int u, v; cin >> u >> v;
            u--; v--;
            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }
 
        vector<deque<int>> adj2(n);
        int m2; cin >> m2;
        for (int i = 0; i < m2; i++) {
            int u, v; cin >> u >> v;
            u--; v--;
            adj2[u].push_back(v);
            adj2[v].push_back(u);
        }
 
        vector<deque<int>> H0(n);
        vector<bitset<1000>> exists(n); // bitset instead of unordered_set
 
        for (int x = 0; x < n; x++) {
            for (int nb : adj1[x]) exists[x][nb] = 1;
            for (int nb : adj2[x]) {
                if (exists[x][nb]) {
                    H0[x].push_back(nb);
                    H0[nb].push_back(x); // Ensuring bidirectional edges during construction
                }
            }
        }
 
        vector<int> component(n, -1);
        vector<bool> isValid(n, false);
        int componentId = 0;
 
        for (int i = 0; i < n; i++) {
            if (component[i] == -1) {
                deque<int> q = {i};
                component[i] = componentId;
                deque<int> members;
                int size = 0;
 
                while (!q.empty()) {
                    int cur = q.front(); q.pop_front();
                    members.push_back(cur);
                    size++;
 
                    for (int nb : H0[cur]) {
                        if (component[nb] == -1) {
                            component[nb] = componentId;
                            q.push_back(nb);
                        }
                    }
                }
                if (size > 1) {
                    for (int v : members) isValid[v] = true;
                }
                componentId++;
            }
        }
 
        using pii = pair<int, int>;
        unordered_map<int, int> dist;
        const int INF = 1e9;
 
        auto stateId = [&](int a, int b) -> int { return a * n + b; };
 
        priority_queue<pii, vector<pii>, greater<pii>> pq;
        int start = stateId(s1, s2);
        dist[start] = 0;
        pq.push({0, start});
        int answer = -1;
 
        while (!pq.empty()) {
            auto [d, state] = pq.top(); pq.pop();
            if (dist[state] < d) continue;
 
            int a = state / n, b = state % n;
            if (a == b && isValid[a]) {
                answer = d;
                break;
            }
 
            for (int na : adj1[a]) {
                for (int nb : adj2[b]) {
                    int cost = abs(na - nb);
                    int nextState = stateId(na, nb);
                    int newDist = d + cost;
 
                    if (!dist.count(nextState) || newDist < dist[nextState]) {
                        dist[nextState] = newDist;
                        pq.push({newDist, nextState});
                    }
                }
            }
        }
 
        cout << answer << "
";
    }
    return 0;
}