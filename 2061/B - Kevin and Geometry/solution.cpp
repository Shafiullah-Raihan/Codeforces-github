#include <bits/stdc++.h>
using namespace std;
 
void run() {
	int n; cin >> n;
	map<int,int> m;
	while (n--) {
		int x; cin >> x;
		m[x]++;
	}
 
	auto it = m.rbegin();
	while (it != m.rend() and it->second < 2) it++;
	if (it == m.rend()) {
		cout << "-1
";
		return;
	}
	int side = it->first;
	m[side] -= 2;
 
	vector<int> a;
	for (auto [x, c] : m) while (c--) a.push_back(x);
	for (size_t i = 0; i+1 < a.size(); i++) {
		if (a[i] + side*2 > a[i+1]) {
			cout << a[i] << ' ' << a[i+1] << ' ' << side << ' ' << side << '
';
			return;
		}
	}
 
	cout << "-1
";
}
 
int main() {
	cin.tie(0)->sync_with_stdio(0);
	int t; cin >> t; while (t--) run();
}