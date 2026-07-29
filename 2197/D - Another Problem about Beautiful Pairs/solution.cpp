#include<cstdio>
int n,a[200005],ans;
void Main(){
	scanf("%d",&n),ans=0;
	for(int i=1;i<=n;i++)scanf("%d",&a[i]);
	for(int i=1;i<=n;i++)for(int j=i+a[i],jj=1;jj<=a[i]&&j<=n;jj++,j+=a[i])ans+=(1ll*a[i]*a[j]==j-i);
	for(int i=1;i<=n;i++)for(int j=i-a[i],jj=1;jj<a[i]&&j>=1;jj++,j-=a[i])ans+=(1ll*a[i]*a[j]==i-j);
	printf("%d
",ans);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--)Main(); 
}