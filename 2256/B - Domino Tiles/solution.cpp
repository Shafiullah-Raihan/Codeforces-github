#include<bits/stdc++.h>
using namespace std;
string a="0011",b="0110",c="1100",d="1001";
int sol(string x,string y)
{
    int sz=x.size();
    for(int i=0;i<sz;i++)
    {
        int j=i%4;
        if(x[i]=='?')
        continue;
        else if(x[i]!=y[j])
        return 0;
    }
    return 1;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int ans=sol(s,a) + sol(s,b) + sol(s,c) + sol(s,d);
        cout<<ans<<endl;
    } 
    return 0;  
}