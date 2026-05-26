#include<bits/stdc++.h>
using namespace std;
 
vector < int > seq;
string s, t;
bool canConvert(int op) {
    vector < bool > deleted(s.length());
    for (int i = 0; i < min(op, (int)seq.size()); i++) {
        deleted[seq[i]] = true;
    }
    int cnt = 0;
    for (int i = 0; i < s.length(); i++) {
        if (cnt == t.length()) break;
        if (!deleted[i] && s[i] == t[cnt]) cnt++;
    }
    if (cnt == t.length()) return true;
    return false;
}
int isOk(long long id) {
    if (canConvert(id)) return 0;
    return 1;
}
int main() {
    cin >> s >> t;
    int n = s.length();
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        seq.push_back(x - 1);
    }
    long long l = 0, r = s.length() + 1;
    while (l < r) {
        long long mid = (l + r) / 2;
        if (isOk(mid) == 0) l = mid + 1;
        else r = mid;
    }
    cout << l - 1 << endl;
return 0;
}