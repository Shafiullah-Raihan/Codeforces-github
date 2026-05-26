#include <bits/stdc++.h>
 
void solve(){
	int n{0}, q{0};
	std::cin >> n >> q;
	int oddSize{0}, evenSize{0};
	long long int oddSum{0}, evenSum{0};
	for(int i{0}; i < n; i++){
		int input{0};
		std::cin >> input;
		if(input&1){
			oddSize++;
			oddSum += input;
		}
		else{
			evenSize++;
			evenSum += input;
		}
	}
	while(q--){
		int type{0}, x{0};
		std::cin >> type >> x;
		if(type == 0){
			if(evenSum == 0){
				std::cout << oddSum + evenSum << std::endl;
				continue;
			}
			long long int temp{x};
			temp *= evenSize;
			evenSum += temp;
			if(x&1){
				oddSum += evenSum;
				evenSum = 0;
				oddSize += evenSize;
				evenSize = 0;
			}
		}
		else{
			if(oddSum == 0){
				std::cout << oddSum + evenSum << std::endl;
				continue;
			}
			long long int temp{x};
			temp *= oddSize;
			oddSum += temp;
			if(x&1){
				evenSum += oddSum;
				oddSum = 0;
				evenSize += oddSize;
				oddSize= 0;
			}
		}
		std::cout << oddSum + evenSum << std::endl;
	}
}
 
int main(){
	std::ios_base::sync_with_stdio(false);
	int tc{0};
	std::cin >> tc;
	while(tc--) solve();
}