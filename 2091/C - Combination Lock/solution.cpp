#include <iostream>
 
using namespace std;
 
void solve() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    }
    for (int i = n; i > 0; i--) {
        cout << i << ' ';
    }
    cout << endl;
}
 
int main() {
    int t = 1;
    cin >> t;
    while (t--) 
        solve();
}