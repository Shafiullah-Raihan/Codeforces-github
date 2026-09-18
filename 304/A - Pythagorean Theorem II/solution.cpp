#include<bits/stdc++.h>
using namespace std;
const int mx= 2e8+111;
bool cnt[mx];
int main()
{
    int n,a,b,c,temp,digit = 0;;
    cin>> n;
 
    for(int i= 0;i<=n;i++){
        int p = i*i;
        cnt[p] = 1;
    }
 
    for(int i= 1;i<=n;i++){
        for(int j= i;j<=n;j++){
            temp = (i*i) + (j*j);
            if(cnt[temp]) {digit++;}
        }
    }
    cout<< digit<<endl;
}