#include "bits/stdc++.h"
using namespace std;
#define endl '
'
 
using i64 = long long;
 
const int MX = 200005;
const int oo = 1e9;
const i64 INF = 1e18;
 
void solve() {
    string s; cin >> s;
    int n = s.length();
    for (int mask = 0; mask < 8; mask ++) {
        int mn = 0, cu = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                if (mask & (1 << 0)) cu --;
                else cu ++;   
            }
            if (s[i] == 'B') {
                if (mask & (1 << 1)) cu --;
                else cu ++;  
            }
            if (s[i] == 'C') {
                if (mask & (1 << 2)) cu --;
                else cu ++;   
            }
            mn = min(mn, cu);
        }
        if (mn == 0 && cu == 0) {
            cout << "YES
";
            return;
        }
    }
    cout << "NO
";
}
 
int main() {
#ifndef ONLINE_JUDGE
	freopen("in.txt", "r", stdin);
//	freopen("out.txt", "w", stdout);
#endif
 
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
	int Tc = 1;
	cin >> Tc;
	while (Tc --) solve();
	return 0;
}