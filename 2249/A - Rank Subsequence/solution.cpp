#include<bits/stdc++.h>
using namespace std;
int t,n,mx;
struct node{
	int a,b,c,d;
}a[5001];
int main(){cin>>t;while(t--){
	cin>>n,mx=0;
	for(int i=1;i<=n;i++)cin>>a[i].a>>a[i].b>>a[i].c>>a[i].d;
	for(int l=1;l<=n;l++){
		int cnt=0;
		for(int i=1;i<=n;i++)
			if(cnt<l&&(cnt+1<a[i].a||a[i].b<cnt+1)&&(l-cnt<a[i].c||a[i].d<l-cnt))cnt++;
		if(cnt==l)mx=l;
	}
	cout<<mx<<'
';
}return 0;}