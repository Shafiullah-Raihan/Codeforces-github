#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1e5+10;
long long t,a[N],b[N];
int main(){
	cin>>t;
while(t--){
	long long n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	sort(a,a+n);
	if(n%2!=0){
		cout<<"NO"<<endl;
	}
	else{
		bool f=1;
		for(int i=0;i<n;i+=2){
			b[i]=a[i/2];
		} 
		for(int i=1;i<n;i+=2){
			b[i]=a[n/2+i/2];
		}
		for(int i=0;i<n-1;i++)	
	if(b[i]==b[i+1])f=0;
			if(!f)cout<<"NO"<<endl;
			
		else{
			cout<<"YES"<<endl;
			for(int i=0;i<n;i++) cout<<b[i]<<" ";
			cout<<endl;
		}
			
		}
	}
}
 