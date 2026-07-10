#include <bits/stdc++.h>
using namespace std;
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(nullptr);
   int n, m, ans = 0;
   cin >> n >> m;
   vector<string> v(n);
   for (auto &i : v) cin >> i;
   auto good = [&] (int x1, int y1, int x2, int y2) {
      for (int i = x1; i <= x2; i++)
         for (int j = y1; j <= y2; j++)
            if (v[i][j] > '0') return false;
      return true;
   };
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
         for (int k = i; k < n; k++) {
            for (int l = j; l < m; l++) {
               if (good(i, j, k, l)) {
                  int a = k - i + 1, b = l - j + 1;
                  ans = max(ans, a * 2 + b * 2);
               }
            }
         }
      }
   }
   cout << ans;
}