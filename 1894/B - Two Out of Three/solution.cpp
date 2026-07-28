#include <bits/stdc++.h>
using namespace std; 
void solve() {
    int n, x, cnt = 0;
   cin >> n;
    vector<int> pos[101], ans(n, 3);
    for (int i = 0; i < n; i++)
        std::cin >> x, pos[x].emplace_back(i);
    for (int i = 1; i <= 100; i++)
        if (pos[i].size() >= 2 && (ans[pos[i].front()] = ++cnt) == 2) {
            for (int x : ans)
                printf("%d ", x);
            return putchar('
'), void();
        }
    puts("-1");
}
 
int main() {
    int T;
    cin >> T;
    while (T--)
        solve();
    return 0;
}