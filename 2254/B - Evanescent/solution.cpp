#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		int n,x,y;
		cin>>n>>s;
		x=1;
		for(int i=1;i<n;i++)x+=(s[i]!=s[i-1]);
		y=0;
		for(int i=1;i<n-1;i++)y=min(y, -(s[i]!=s[i-1])-(s[i]!=s[i+1])+(s[i-1]!=s[i+1]));
		cout<<x+y<<endl;
	}
}