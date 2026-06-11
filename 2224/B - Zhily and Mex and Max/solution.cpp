#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
  int t;
  cin >> t;
  while (t--) {
    int n ; cin >>n;
    map<int,int>m;
    for(int i=0;i<n;i++){
        int x; cin >>x;
        m[x]=1;
    }
    int mex=0;
    for(auto &[x,y]:m){
        if(x==mex){
            mex++;
        }else{
            break;
        }
    }
// cout << mex << endl;
  long long ans= (m.rbegin())->first *1LL*n + ((mex)*1LL*(mex+1))/2  + mex*1LL*(n-mex-1) ;
if((m.rbegin())->first== mex-1){
    ans++;
}
cout << ans << endl;
  }
}