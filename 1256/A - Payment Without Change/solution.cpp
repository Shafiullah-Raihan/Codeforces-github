#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int a,b,n,s;
    cin>>a>>b>>n>>s;
    int x=s/n;
    if (x>a) swap(x,a);
    if (s-x*n>b) cout<<"NO
";
    else cout<<"YES
";
}
 
int main(){
    int t;cin>>t;
    while (t--) solve();
}