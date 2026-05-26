#include <iostream>
using namespace std;
typedef long long ll;
 
 
void solve() {
  int n, m; string s;
  cin >> n >> m >> s;
 
  ll G[n][m], R[n]{0}, C[m]{0};
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> G[i][j], R[i] += G[i][j], C[j] += G[i][j];
 
  for (int i = 0, j = 0; char c : s) {
    if (c == 'D') G[i][j] = -R[i], C[j] -= R[i++];
    else G[i][j] = -C[j], R[i] -= C[j++];
  }
 
  G[n - 1][m - 1] = -R[n - 1];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cout << G[i][j] << " 
"[j + 1 == m];
}
 
 
int main() {
  ios_base::sync_with_stdio(0); cin.tie(0);
  int tt; cin >> tt; while (tt--) solve(); return 0;
}