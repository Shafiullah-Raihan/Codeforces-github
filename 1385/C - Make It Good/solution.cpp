#include <bits/stdc++.h>
using namespace std;
int t, n, a[200005];
int main() {
  cin >> t;
  while (t--) {
    cin >> n;
    int k = n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    while (a[k - 1] >= a[k] && k > 1) k--;
    while (a[k - 1] <= a[k] && k > 1) k--;
    cout << k - 1 << "
";
  }
  return 0;
}//
		    	 			 		       			   	 	