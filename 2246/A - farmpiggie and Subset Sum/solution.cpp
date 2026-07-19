#include<iostream>
using namespace std;
int t,n;
int main(){
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=n;i>=1;i--) cout<<i<<" ";
		cout<<endl;
	}
	return 0;
}