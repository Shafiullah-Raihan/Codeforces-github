#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int limit = 1e6;
vector<int>ans;
void seive(int limit)
{
    vector<bool>bl(limit+1,true);
    bl[0] = false , bl[1] = false;
    for(int i=2;i<=limit;i++){
        if(bl[i]){
                ans.push_back(i);
            for(int j=2*i;j<=limit;j+=i){
                bl[j] = false;
            }
        }
    }
}
 
 
int main()
{
 
    seive(limit);
//    for(auto u:ans){
//        cout<< u<< " ";
//    }
//    cout<< endl;
 
    int T;cin>>T;
    while(T--){
            int d;cin>>d;
        long long p = *lower_bound(ans.begin(),ans.end(),1+d);
        long long q = *lower_bound(ans.begin(),ans.end(),d+p);
        cout<<p*q<<endl;
 
    }
 
  return 0;
}