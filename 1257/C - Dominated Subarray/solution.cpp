// LUOGU_RID: 157333217
#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int a[N],n,t;
int main(){
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	for(cin>>t;t;t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		int ans=INT_MAX;
		vector<int>sum(n+2);
		for(int i=1;i<=n;i++){
			if(sum[a[i]]){
				ans=min(ans,i-sum[a[i]]+1);
			}
			sum[a[i]]=i;
		}
		cout<<(ans==INT_MAX?-1:ans)<<'
';
	}
}