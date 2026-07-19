#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
  int t, n, k;
  string s;
  for (cin >> t; t--;) {
    cin >> n >> k >> s;
    int b = count(begin(s), end(s), 'B');
    int a = 0;
    const char* c = (b > k ? " A
" : " B
");
    for (int i = 0; b != k && i < n; ++i, ++a) {
      if (b > k && s[i] == 'B') b--;
      if (b < k && s[i] == 'A') b++;
    }
    if (a == 0) cout << "0
";
    else  cout << "1
" << a << c;
  }
}