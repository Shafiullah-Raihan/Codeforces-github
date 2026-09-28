#include<bits/stdc++.h>
#define ll long long
#define vl vector<ll>
using namespace std;
int main(){
  cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
  ll t;cin>>t;
  while(t--){
    ll n,k,ans=0;cin>>n>>k;
    vl a(n);for(ll&x:a)cin>>x;
    for(ll i=0;i<k-1&&i<=n-k;i++)ans+=max(a[i],a[n-i-1]);
    for(ll i=k-1;i<=n-k;i++)ans+=a[i];
    cout<<ans<<endl;
  }
}