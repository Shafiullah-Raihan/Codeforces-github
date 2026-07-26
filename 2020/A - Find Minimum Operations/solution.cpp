#include<bits/stdc++.h>
using namespace std;
main(){
	int T;cin>>T;
	while(T--){
		int n,k;cin>>n>>k;
		if(k==1){cout<<n<<"
";continue;}
		int c=0;while(n>0){c+=n%k;n/=k;}
		cout<<c<<"
";	
	}
}