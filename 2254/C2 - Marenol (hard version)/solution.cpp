#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int t;cin>>t;
    while(t--){
        int n;string a,b;cin>>n>>a>>b;
        long long r=0;int d[2]={0,0};
        for(int i=0;i<n;i++){
            d[i&1]+=a[i]-b[i];
            r+=abs(d[i&1]);
        }
        cout<<(d[0]||d[1]?-1LL:r)<<"
";
    }
}