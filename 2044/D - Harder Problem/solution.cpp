#include<bits/stdc++.h>
using namespace std;
int t;
int n,a[200010];
bool bk[200010];
int main(){
cin>>t;
while(t--){
cin>>n;
for(int i=1;i<=n;i++){
cin>>a[i];
bk[i]=0;
}
int num=1;
for(int i=1;i<=n;i++){
if(bk[a[i]]==0){
cout<<a[i]<<' ';
bk[a[i]]=1;
}
else{
while(bk[num]==1){
num++;
}
cout<<num<<' ';
bk[num]=1;
}
}
}
return 0;
}