#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int a[N],b[N],pos[N];
bool vis[N];
void sol(){
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		pos[a[i]]=i;
		vis[i]=0;
	}
	for (int i=1;i<=n;i++){
		cin>>b[i];
	}
	int ans=0;
	for (int i=1;i<=n;i++){
		if (!vis[i]){
			int cyc=0;
			for (int j=i;!vis[j];j=b[pos[j]]){
				cyc++;
				vis[j]=1;
			}
			ans+=cyc/2;
		}
	}
	cout<<2*ans*(n-ans)<<endl;
}
signed main(){
	int t;
	cin>>t;
	while (t--){
		sol();
	}
	return 0;
}