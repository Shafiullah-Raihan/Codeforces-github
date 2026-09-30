#include<bits/stdc++.h>
#define int long long
using namespace std;
int T,n,q,ans,s,mx;
struct fun{
	int x,id;
}a[1000006];
bool cmp(fun n1,fun n2){
	if(n1.x!=n2.x) return n1.x<n2.x;
	else return n1.id<n2.id;
}
signed main(){
	int i;
	cin>>T;
	while(T--){
		ans=1;
		mx=0;
		cin>>n>>q;
		for(i=0;i<n;i++){
			cin>>a[i].x;
			a[i].id=i;
		}
		sort(a,a+n,cmp);
		for(i=0;i<n;i++) mx=max(mx,i^a[i].id);
		while(ans<=mx) ans*=2;
		ans/=2;
		cout<<ans<<'
';
	}
}