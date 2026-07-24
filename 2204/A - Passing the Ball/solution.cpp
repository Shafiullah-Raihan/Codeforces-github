#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    string s;
    cin>>t;
    while(t--) {
        cin>>n>>s;
        cout<<s.find('L')+1<<endl;
    }
    return 0;
}