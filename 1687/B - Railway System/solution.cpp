// LUOGU_RID: 155981494
#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int n,m;
struct node{
  int val,id;
  bool operator<(node b){return val<b.val;}
}e[510];
int a[510];
signed main(){
  cin>>n>>m;
  for(int i=1;i<=m;++i){
    cout<<"? ";
    for(int j=1;j<=m;++j){
      if(j==i)cout<<"1";
      else cout<<"0";
    }
    cout<<endl;
    int t;cin>>t;
    e[i]={t,i};
  }
  sort(e+1,e+m+1);
  int w=0,_w=0,ans=0;
  for(int i=1;i<=m;++i){
    a[e[i].id]=1;
    cout<<"? ";
    for(int j=1;j<=m;++j)cout<<a[j];
    cout<<endl;
    cin>>w;
    if(w-_w==e[i].val)ans+=e[i].val;
    _w=w;
  }
  cout<<"! "<<ans<<endl;
  return 0;
}