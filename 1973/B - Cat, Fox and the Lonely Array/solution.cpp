#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int n,ans=1,i,j;
	cin>>n;
	vector<int>a(n);
	for(auto &d:a) cin>>d;
	for(i=0;i<=20;i++){
		int p=0;
		for(j=0;j<n;j++){
			if((a[j]>>i)&1) ans=max(ans,j-p+1),p=j+1;
		}
		if(p)ans=max(ans,n+1-p);
	}
	cout<<ans<<endl;
	}
}