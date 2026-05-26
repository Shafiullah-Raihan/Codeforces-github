#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
  int t;
  t=1;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];ll d=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n-1;i+=2)
    {
      swap(a[i],a[i-1]);d++;
    }
    cout<<d<<"
";
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
 
  }
}