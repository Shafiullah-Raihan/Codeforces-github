#include<bits/stdc++.h>
using namespace std;
#define long long long
int T,n;long v[1000010];
int main(){
	for(cin>>T;T--;cout<<"
"){
		cin>>n;
		for(int i=1;i<=n;i++)cin>>v[i];
		for(int i=n;i;i--)v[i]-=v[i-1];
		for(int i=2,j=i;j<=n;i=j){
			while(j<=n&&!((v[i]^v[j])&1))j++;
			sort(v+i,v+j);
		}
		for(int i=1;i<=n;i++)cout<<(v[i]+=v[i-1])<<" ";
	}
	return 0;
}