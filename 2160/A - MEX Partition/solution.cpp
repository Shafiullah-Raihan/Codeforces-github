#include<iostream>
using namespace std;
 
int main(){
int t;cin>>t;
while(t--){
int n;cin>>n;
int arr[n];
int h[100]={};
for(int i=0;i<n;i++){
cin>>arr[i];
h[arr[i]]++;
}
for(int i=0;i<100;i++){
if(h[i]==0) {
cout<<i<<endl;
break;
}
 
}
}}