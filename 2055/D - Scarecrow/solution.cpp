#include <bits/stdc++.h>
using namespace std;
#define ll double
 
void solve(){
    ll n,k,l; cin >> n >> k >> l;
    vector <int> a(n);
    vector <ll> b(n);
    for (int i=0;i<n;i++)
        cin >> a[i];
    
    double time = a[0];
 
    for (int i=1;i<n;i++){
        b[i] = max(b[i-1]+k,(a[i]-time+b[i-1]+k)/2.0);
        b[i] = min(l,min(a[i]+time,b[i]));
        time+=max(0.0,b[i]-b[i-1]-k);
 
    }
    time+= max(0.0,l-b[n-1]-k);
    
    cout << (long long int)(2*time) << '
';
    }
 
 
int main(){
    int t; cin>>t;
    while(t){
        solve();
        t--;
    }
 
 
return 0;
}