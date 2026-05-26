#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int t;cin>>t;
    while(t--){
        bool red=false;
        for(int i=1;i<=8;i++){
            string s;cin>>s;
            if(s=="RRRRRRRR")red=true;
        }if(red)cout<<"R"<<endl;
        else cout<<"B"<<endl;
    }
  return 0;
}