#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
 
        bool isValid = true;
        for (int i = 0; i < n; i++) {
            int leftBoundary = i * 2;
            int rightBoundary = (n - i - 1) * 2;
 
            if (a[i] <= leftBoundary || a[i] <= rightBoundary) {
                isValid = false;
                break;
            }
        }
 
        cout << (isValid ? "YES" : "NO") << endl;
    }
 
    return 0;
}