#include <bits/stdc++.h>
 
using namespace std;
 
class DSU {
    vector<int> parent, size;
 
public:
    DSU(int n) {
        parent.resize(n);
        size.resize(n, 1);
        iota(parent.begin(), parent.end(), 0);
    }
 
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }
 
    void unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX != rootY) {
            if (size[rootX] < size[rootY]) {
                swap(rootX, rootY);
            }
            parent[rootY] = rootX;
            size[rootX] += size[rootY];
        }
    }
 
    int getSize(int x) {
        return size[find(x)];
    }
};
 
int main() {
#ifdef _DEBUG
    freopen("input.txt", "r", stdin);
#endif
 
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int> p(n);
        DSU dsu(n);
 
        for (int i = 0; i < n; ++i) {
            cin >> p[i];
            --p[i];
        }
 
        // Build the union-find structure
        for (int i = 0; i < n; ++i) {
            dsu.unite(i, p[i]);
        }
 
        // Compute and output the cycle sizes
        vector<int> cycleSizes(n);
        for (int i = 0; i < n; ++i) {
            cycleSizes[i] = dsu.getSize(i);
        }
 
        for (int size : cycleSizes) {
            cout << size << " ";
        }
        cout << endl;
    }
 
    return 0;
}