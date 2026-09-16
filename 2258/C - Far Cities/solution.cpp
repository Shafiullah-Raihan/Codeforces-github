#include<bits/stdc++.h>
using namespace std;
int n;
inline int query(int u,int v,int d){
	cout<<"? "<<u<<" "<<v<<" "<<d<<endl;
	int res;cin>>res;
	return res;
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>n;
		int u=1,v=1,d=0;
		for(int i=1;i<=n;i++){
			while(d<n-1 && query(u,i,d+1)) v=i,d++;
		}
		for(int i=1;i<=n;i++){
			while(d<n-1 && query(v,i,d+1)) u=i,d++;
		}
		cout<<"! "<<u<<" "<<v<<" "<<d<<endl;
	}
	return 0; 
}