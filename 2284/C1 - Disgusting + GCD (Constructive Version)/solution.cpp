#include <iostream>
using namespace std;
 
bool isPrime(int x) {
if (x < 2) return false;
for (int d = 2; d * d <= x; d++)
    if (x % d == 0) return false;
return true;
}
void solve(){
    int n;
    cin >> n;
for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    while (isPrime(a)==0) a++;
    cout << a << " ";
    }
    cout << endl;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}