#include <bits/stdc++.h>
using ll = int64_t;
using namespace std;
 
const int N = 1e6;
vector<int> minp(N + 1), primes;
int cnt[N + 1];
 
void sieve(int n) {
    for (int i = 2; i <= n; i++) {
        if (minp[i] == 0) {
            minp[i] = i;
            primes.push_back(i);
        }
        for (auto p : primes) {
            if (p * i > n) break;
            minp[i * p] = p;
            if (p == minp[i]) {
                break;
            }
        }
    }
}
 
void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> s;
    int d = 1;
    auto add = [&](int x, int t = 1) ->void {
        while (x > 1) {
            int p = minp[x];
            x /= p;
            d /= cnt[p] + 1;
            cnt[p] += t;
            d *= cnt[p] + 1;
        }
    };
    add(n);
    s.push_back(n);
    while (q--) {
        int o;
        cin >> o;
        if (o == 1) {
            int x;
            cin >> x;
            s.push_back(x);
            add(x);
            int v = 1;
            for (auto i : s) {
                v = 1ll * v * i % d;
            }
            if (v == 0) cout << "YES
";
            else cout << "NO
";
        } else {
            while (s.size() > 1) {
                add(s.back(), -1);
                s.pop_back();
            }
        }
    }
    while (s.size()) {
        add(s.back(), -1);
        s.pop_back();
    }
    cout << '
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    sieve(N);
 
    int tt = 1; cin >> tt;
    while(tt--){
        solve();
    }
    return 0;
}