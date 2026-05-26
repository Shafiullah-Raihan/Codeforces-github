#include<bits/stdc++.h>
using namespace std;
#define int long long
int v[1<<20],p[1<<20],c,x,n,a[1<<20],m,q[1<<20],r[1<<20],f[5000][5000],z[1<<20],O=998244353;
main(){
v[1]=1;
for(int i=2;i<=1e6;i++){
if(!v[i])
p[++c]=i;
for(int j=1;j<=c&&(x=i*p[j])<=1e6;j++){
v[x]=1;
if(i%p[j]==0)
break;
}
}
cin>>n;
for(int i=1;i<=2*n;i++)
cin>>a[i],z[a[i]]++;
sort(a+1,a+2*n+1),m=unique(a+1,a+2*n+1)-a-1;
p[0]=q[0]=p[1]=q[1]=r[1]=1;
for(int i=2;i<=2*n;i++)
p[i]=i*p[i-1]%O,r[i]=(O-O/i)*r[O%i]%O,q[i]=r[i]*q[i-1]%O;
f[0][0]=p[n];
for(int i=1;i<=m;i++)
for(int j=0;j<=n;j++){
(f[i][j]+=f[i-1][j]*q[z[a[i]]])%=O;
if(!v[a[i]])
(f[i][j+1]+=f[i-1][j]*q[z[a[i]]-1])%=O;
}
cout<<f[m][n];
}