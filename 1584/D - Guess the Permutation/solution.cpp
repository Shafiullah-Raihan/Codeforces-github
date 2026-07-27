#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,i,j,k;
int ask(int l,int r){cout<<"? "<<l<<' '<<r<<endl;cin>>l;return l;}
void print(int i,int j,int k){cout<<"! "<<i<<' '<<j<<' '<<k<<endl;}
signed main(){
cin>>t;
while(t--){
cin>>n;
int L=0,R=n+1,mid;
while(L<R-1){
mid=L+R>>1;
if(!ask(1,mid))L=mid;
else R=mid;
}
i=L,j=i+ask(i,n)-ask(i+1,n)+1,k=j+ask(j,n)-ask(j+1,n);
print(i,j,k);
}
}