#include <bits/stdc++.h>
using namespace std;
int main()
{
 
int N;
cin>>N;
set<int>s;
for(int i=0;i<N;i++){
int x;
cin>>x;
s.insert(x);
}
if(s.size()<2)cout<<"NO"<<endl;
else {
auto it=s.begin();
it++;
cout<<*it;
}
 
return 0;
}
 