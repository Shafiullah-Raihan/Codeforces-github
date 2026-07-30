#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e3+10;
signed main(){
	int n,m,v;cin>>n>>m>>v;
	if(m<n-1||m>(n-1)*(n-2)/2+1){
		cout<<-1;
		return 0; 
	}
	m-=(n-1);
	for(int i=1;i<=n;i++){
		if(i!=v){
			cout<<i<<' '<<v<<endl;
		}
	}
	if(m){
		for(int i=2;i<n;i++){
			if(i==v)continue;
			for(int j=1;j<i;j++){
				if(j==v)continue;
				cout<<i<<' '<<j<<endl;//21
				m--;
				if(m==0)return 0;
			}
		}
	}
	return 0;
}