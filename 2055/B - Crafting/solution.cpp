#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define N 1000000
 
 
int main(){
    ll i,j,k,n,m,t,a[N+1];
	cin>>t;
	while(t--){
		cin>>n;
		for(i=1;i<=n;i++)
		cin>>a[i];
		for(i=1;i<=n;i++){
			cin>>k;
			a[i]=a[i]-k;
		}
		sort(a+1,a+n+1);
		if(a[1]+a[2]<0)
		cout<<"NO"<<endl;
		else 
		cout<<"YES"<<endl;
	}
}