#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll n,m;cin>>n>>m;vector<bool>a(26,false);for(int i=0;i<n;i++){string s;cin>>s;a[s[0]-'a']=true;}bool ok=true;for(int i=0;i<m;i++){string s;cin>>s;for(char c:s){if(!a[c-'A'])ok=false;}}cout<<((ok)?"YES":"NO")<<endl;
}
int main(){int t;cin>>t;while(t--){solve();}}