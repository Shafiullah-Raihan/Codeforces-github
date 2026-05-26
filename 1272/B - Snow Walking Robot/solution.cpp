#include <bits/stdc++.h>
#define ll long long
#define tt int tc;cin>>tc;while(tc--){
#define all(v) (v).begin(),(v).end()
#define nn cout<<"
"
using namespace std;
 
void Ahmed_Sayed(){
ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
}
 
int main()
{
Ahmed_Sayed();
tt
string s;cin>>s;
int u=0,d=0,l=0,r=0;
 
for(auto i:s){
    l+=i=='L',
    r+=i=='R',
    u+=i=='U',
    d+=i=='D';
}
 
while(l>min(l,r))l--;
while(r>min(l,r))r--;
 
while(d>min(d,u))d--;
while(u>min(d,u))u--;
 
if(!l&&!u)cout<<0;
else if(!l&&u)cout<<"2
UD";
else if(l&&!u)cout<<"2
LR";
else{
    cout<<l*2+u*2<<'
';
 
    while(l--)cout<<'L';
    while(d--)cout<<'D';
    while(r--)cout<<'R';
    while(u--)cout<<'U';
}
nn;}
}