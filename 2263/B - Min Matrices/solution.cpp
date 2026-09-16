#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){ 
int n, k;
cin >> n >>k;
if(k > n*2-1 || n > k) {cout << "-1
";}
else {
int c = k-n, cnt = 0;
for(int i = 0; i < n; ++i) {
	for(int j = 0; j < n; ++j) {
	if(i <= c && j == 0) {
	cout << (i+1) << " ";
	} else if(i > c && i==j){
	cout << (i+1) << " ";
	} else {
	cout << (n*n)-cnt << " ";
	cnt++;
	}
	}
	cout << "
";
	}
}
}
main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin >> t;
while(t--) {
solve();
}
}