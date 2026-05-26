#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << (abs(b - a) % 2 == 0 ? "YES" : "NO") << "
";
    }
 
    return 0;
}