#include<bits/stdc++.h>
int i,j,X,Y,K,x[10],y[10],C[1<<22];
int main() {
  std::ifstream I("input.txt");
  std::ofstream O("output.txt");
  for(I>>X>>Y>>K;i<K;I>>x[i]>>y[i],++i);
  for(;j<Y*X;++j)
    for(C[j]=Y+X,i=0;i<K;++i)C[j]=std::min(C[j],abs(j%X-x[i]+1)+abs(j/X-y[i]+1));
  for(i=j=0;j<Y*X;++j)
    if(C[j]>C[0])C[0]=C[j],i=j;
  O<<i%X+1<<' '<<i/X+1;
}