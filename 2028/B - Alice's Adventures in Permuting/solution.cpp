#include <bits/stdc++.h>
 
int main (int argc, char *argv[]) {
  std::ios::sync_with_stdio(0);
  std::cin.tie(nullptr);
 
  int t; std::cin >> t;
  for(; t; --t) {
    long long n, b, c;
    std::cin >> n >> b >> c;
    if(b == 0 && c < n-2) std::cout << -1;
    else if(b == 0) {
      if(c < n) std::cout << n-1;
      else std::cout << n;
    }
    else {
      std::cout << n - std::max(0ll, (long long)ceil((n-c) * 1.0 / b));
    }
    std::cout << '
';
  }  
 
  return 0;
}