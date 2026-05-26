#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
ios_base::sync_with_stdio(false);cin.tie(0);
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll a[n];
    for(int i=0;i<n;i++){cin>>a[i];}
    if(n%2==0)cout<<"2
"<<"1 "<<n<<"
"<<"1 "<<n<<"
";
    else cout<<"4
"<<"1 "<<n<<"
"<<"2 "<<n<<"
"<<"1 2
"<<"1 2
";
}
 
 
return 0;
}
 