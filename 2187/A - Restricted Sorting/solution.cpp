#include<bits/stdc++.h>
using namespace std;
const int N=2e5+9;
int T,n,a[N],b[N];
int main(){
	for(cin>>T;T--;){
		cin>>n;for(int i=1;i<=n;i++)cin>>a[i],b[i]=a[i];
		sort(b+1,b+n+1);
		int f=0;
		for(int i=1;i<n;i++)if(a[i]>a[i+1])f=1;
		if(!f)puts("-1");
		else{
			int ans=2e9;
			for(int i=1;i<=n;i++)if(a[i]^b[i])ans=min(ans,max(b[n]-a[i],a[i]-b[1]));
			cout<<ans<<'
';
		}
	}
}