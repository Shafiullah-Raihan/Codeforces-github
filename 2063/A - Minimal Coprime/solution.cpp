#include <bits/stdc++.h>
using namespace std;
 
 
 
int main() {
    int T;
    cin >> T;
 
 
 
    while (T--)
    {
        int left,right;
        cin>>left>>right;
 
        if(left==1 && right==1)
        {
            cout<<1<<endl;
            continue;
        }
 
        cout<<right-left<<endl;
 
    }
 
    return 0;
}