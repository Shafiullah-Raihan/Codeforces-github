#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n;cin>>n;
	vector<int>a(n),b(n);
	for(int i=0;i<n;i++)cin>>a[i];
	for(int i=0;i<n;i++)cin>>b[i];
	int ans=0,t=0;
	bool ok=true,p=true;
	for(int i=0;i<n;i++){
		if(a[i]>b[i]){
			p=false;
			break;
		}else if(a[i]<=b[i]){
			if(t!=0){
				if(t==b[i]-a[i]&&ok){
					continue;
				}else{
					if(b[i]-a[i]==0)ok=false;
					else p=false;
				}
			}else{
				t=b[i]-a[i];
			}
		}
	}
	if(p){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
}
int main(){
	int t=1;
	cin>>t;
	while(t--)solve();
	return 0;
}