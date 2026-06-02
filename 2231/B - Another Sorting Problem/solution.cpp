#include <bits/stdc++.h>
 
using ll = long long;
 
using namespace std;
 
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
      cin >> a[i];
    int mx = 0;
    for (int i = 1; i < n; ++i)
      mx = max(mx, a[i - 1] - a[i]);
    for (int i = 1; i < n; ++i) {
      if (a[i - 1] > a[i])
        a[i] += mx;
    }
    if (is_sorted(a.begin(), a.end()))
      cout << "YES
";
    else
      cout << "NO
";
  }
}