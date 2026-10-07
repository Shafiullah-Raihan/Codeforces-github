#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int t,n,a[N],q,ans[9000006],top,ly[N],ip;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>t;
	while(t--){
		cin>>n>>q;
		for(int i=1;i<=n;i++)cin>>a[i];
		sort(a+1,a+n+1);
		ly[0]=a[n]-a[1];
		ip=0;
		while(a[n]>0){
			top=0;
			for(int i=1;i<=n;i++)for(int j=i+1;j<=n;j++)ans[++top]=a[i]^a[j];
			sort(ans+1,ans+top+1);
			for(int i=1;i<=n;i++)a[i]=ans[i];
			ly[++ip]=a[n]-a[1];
		}
		for(int i=1,x;i<=q;i++){
			cin>>x;
			if(x>ip)cout<<0<<"
";
			else cout<<ly[x]<<"
";
		}
	}
	return 0;
} 