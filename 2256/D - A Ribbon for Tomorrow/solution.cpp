#include<bits/stdc++.h>
using namespace std;
#define long long long
const int mod=998244353;
long qk(long a,long b){
	long ret=1;
	for(;b;b>>=1,a=a*a%mod)if(b&1)ret=ret*a%mod;
	return ret;
}
int T,n,k,c0,c1,f0,f1;string s;
long c(int a,int b){
	long g1=1,g2=1;
	for(int i=1;i<=b;i++)g1=g1*(a-i+1)%mod,g2=g2*i%mod;
	return g1*qk(g2,mod-2)%mod;
}
int main(){
	for(cin>>T;T--;){
		cin>>n>>s,c0=c1=f0=f1=0;
		for(int i=0,f=-1;i<n;i++){
			if(f==s[i]){
				if(f=='0')f0++;
				else f1++;
			}else if(s[i]=='0'){
				f=s[i],c0++;
			}else f=s[i],c1++;
		}
		cout<<c(f0+c0-1,c0-1)*c(f1+c1-1,c1-1)%mod<<"
";
	}
	return 0;
}