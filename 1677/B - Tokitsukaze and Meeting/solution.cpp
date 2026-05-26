#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n,m,a,t;
int low[N],row[N];
char s[N];
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		int lst=1919810,ans=0;
		for(int i=0;i<=m;i++)  row[i]=low[i]=0;
		scanf("%s",s+1);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				a=s[(i-1)*m+j]-'0';
				if(a==1){
					if(!row[j%m])  ans++,row[j%m]=1;
					lst=0;
				}
				if(lst<m)  low[j%m]++;
				lst++;
				printf("%d ",ans+low[j%m]);
			}
		}
		printf("
");
	}
}