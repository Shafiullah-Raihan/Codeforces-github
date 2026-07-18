#include <bits/stdc++.h>
using namespace std;
int f(int a){
    int a1=0;
    int b=1;
    while(a!=0){
        if(a%10!=0){
        a1+=(a%10)*b;
        b*=10;
        }
        a/=10;
    }
    return a1;
}
int main() {
    int a,b;
    cin>>a>>b;
    int c=a+b;
    if(f(a)+f(b)==f(c)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}