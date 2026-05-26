#include <iostream>
using namespace std;
int main(){
string x;
bool y=false;
cin>>x;
for(int i=0;i<x.size();i++)
{
if(x[i]=='H'||x[i]=='Q'||x[i]=='9')
{
y=true;
break;
}
}
if(y)
cout<<"YES";
else
cout<<"NO";
}