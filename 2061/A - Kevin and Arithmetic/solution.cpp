#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void sol(){
	int n,x;
	cin>>n;
	int t1=0,t2=0;
	for(int i=0;i<n;++i){
		cin>>x;
		if(x%2==0)t1++;
		else t2++;
	}
	if(t1!=0) cout<<1+t2<<endl;
	else cout<<t2-1<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		sol();
	}
	return 0;
}