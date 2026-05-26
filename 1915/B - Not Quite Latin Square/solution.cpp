#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    char c;
    cin>>t;
    while(t--){
        char ans = 'A'^'B'^'C'^'?';
        for(int i=0;i<9;i++){
            cin>>c;
            ans = ans ^ c;
        }
        
        cout<<ans<<endl;
    }
}