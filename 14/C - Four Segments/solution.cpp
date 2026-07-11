#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<pair<int, int>, int> s;
    int v = 0;
    int h = 0;
    for (int i = 0; i < 4; i++) {
        int x1, y1, x2 ,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 != x2 && y1 != y2) {
            cout << "NO
";
            return 0;
        }
        if (x1 == x2 && y1 == y2) {
            cout << "NO
";
            return 0;
        }
        if (x1 == x2) {
            v++;
        }
        if (y1 == y2) {
            h++;
        }
        s[{x1, y1}]++;
        s[{x2, y2}]++;
    }
    for (auto it = s.begin(); it != s.end(); it++) {
        if ((*it).second != 2) {
            cout << "NO
";
            return 0;
        }
    }
    cout << ((v == 2 && h == 2 && s.size() == 4)? "YES
" : "NO
");
    return 0;
}