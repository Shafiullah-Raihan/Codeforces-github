#include<bits/stdc++.h>
using namespace std;
long long q,t,h,u;
int main(){
    cin >> q;
    while(q--){
        cin >> t >> h >> u;
        if(t>u+2*h) cout << 2*t+3*h+2*u+1 << '
';
        else cout << 2*t+3*h+3*u-min(t,u) << '
';
    }
}