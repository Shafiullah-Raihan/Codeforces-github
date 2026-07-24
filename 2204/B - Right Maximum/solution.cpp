#include <bits/stdc++.h>
using namespace std;
long long t,n,x,m,s;
void solve()
{
    while(t--)
    {
        cin>>n,m=s=0;
        while(n--) cin>>x,m=m>x?m:x,s+=(x>=m?1:0);
        cout<<s<<endl;
    }
}
int main() {while(cin>>t) solve();}