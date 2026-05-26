#include<bits/stdc++.h>
using namespace std;
#define ll long long
 
void helper(){ 
    ll n,k,b,s;
    cin>>n>>k>>b>>s;
 
    ll m = k*b;
    if(m>s || (m + (n)*(k-1))<s){
        cout<<-1<<endl;
        return;
    }
 
    s -= m;
    cout<<m + min(s, k-1)<<" ";
    s -= min(s, k-1);
    n--;
 
    while(n--){
        if(s>0) cout<<min(s, k-1)<<" ";
        else cout<<0<<" ";
        s -= min(s, k-1);
    }
 
    cout<<endl;
}
 
signed main(){
    ll t; cin>>t;
    while(t--)  helper();
    return 0;
}