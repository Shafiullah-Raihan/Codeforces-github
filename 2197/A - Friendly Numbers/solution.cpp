#include<iostream>
long long T,x,y,t,s,a;
int main(){
for(std::cin>>T;T--;std::cout<<a<<'
')
for(std::cin>>x,a=0,y=x/10;y<=x/10+9;y++){
for(t=y,s=0;t;s+=t%10,t/=10);
if(y*10-s==x)a=10;
}
}