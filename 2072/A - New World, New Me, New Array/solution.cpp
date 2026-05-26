#include<iostream>
#include<cmath>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    double n,k,p;
    cin>>n>>k>>p;
    if(ceil(abs((k/p)))<=n) cout<<ceil(abs(k/p))<<endl;
    else cout<<-1<<endl;
 
  }
}