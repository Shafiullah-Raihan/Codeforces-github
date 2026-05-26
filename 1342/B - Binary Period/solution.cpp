#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>
 
 
int main() {
	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		bool ans = true;
		int n = s.size();
		for (int i = 1; i < n; ++i){
			if(s[i] != s[i-1]){
				ans = false;
				break;
			}
		}
		if(ans)
			cout << s << endl;
		else{
			string str = "";
			for (int i = 0; i < n;i++){
				str += "10";
			}
			cout << str << endl;
		}
	}
	
 
	
}