#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using sll = signed long long;
using ull = unsigned long long;
#define ff first
#define ss second
typedef pair<ll,ll> pai;
 
void f(){
	int n;cin >> n;
	string s;cin >> s;
	string ans = s;
	int k = 1;
	for(int i=1;i<n;i++){
		string aux = s.substr(i) + s.substr(0,i);
		if((n - i) % 2){
			reverse(aux.begin() + (n - i),aux.end());
		}
		if(aux < ans){
			ans = aux;
			k = i + 1;
		}
	}
	cout << ans << "
" << k << "
";
}
 
int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        f();
    }
    return 0;
}