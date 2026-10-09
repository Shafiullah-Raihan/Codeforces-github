#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	
	while (t--) {
		long long z,a = 0,arr[1001]={0},ans = 0, k;
		cin >> z;
		while (z > 0) {
			arr[a++] = z % 3;
			z /= 3;
		}
		k = a;
		for (int i = a - 1;i >= 0;i--){
			k-=1;
			ans += (pow(3,k+1) + k*pow(3,k-1)) * arr[i];
		}
		cout<< ans <<"
";
	}
}