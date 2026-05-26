#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
 
 
int main()
{
 
        ll n,k,temp;
        cin>>n>>k;
        for(ll i=0;i<=n;i++){
            temp = (n-i)*(n-i+1)/2;
            if(temp - i == k){
                cout<< i<<endl;
                break;
            }
        }
 
  return 0;
}