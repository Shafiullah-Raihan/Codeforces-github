#include "bits/stdc++.h"
using namespace std;
#define ll long long
 
 
 
 
 
int main() {
    int t=1;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        queue<int>q;
        for(int i=0;i<n;i++){
            int cur;
            cin>>cur;
            q.push(cur);
            while(q.front()<q.size())q.pop();
            cout<<q.size()<<" ";
        }
        cout<<"
";
    }
    
}
 