#include<iostream>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{string a,b,c="NO";
cin>>a>>b;
for(int i=0;i<a.size()-1;i++)
{if(a[i]=='0'&&b[i]=='0'&&a[i+1]=='1'&&b[i+1]=='1')
{c="YES";
break;}}
cout<<c<<endl;}}