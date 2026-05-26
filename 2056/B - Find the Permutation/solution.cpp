#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;cin>>t;while(t--){
		int n;cin>>n;map<int,int>m;
		for(int i=0;i<n;i++){
			string s;cin>>s;int c=0;
			for(int j=0;j<n;j++){
				if(i==j)
					continue;
				if(i<j){
					if(s[j]=='1')
						c++;
				}
				else if(s[j]=='0')
					c++;
			}m[n-c-1]=i+1;
		}for(auto &it:m){
			cout<<it.second<<" ";
		}cout<<endl;
	}
}