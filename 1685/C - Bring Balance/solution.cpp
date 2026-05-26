#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int n,s[MAXN];
char str[MAXN];
void solve() {
	scanf("%d%s",&n,str+1),n*=2;
	int l=n+1,r=0;
	for(int i=1;i<=n;++i) {
		s[i]=s[i-1]+(str[i]=='('?1:-1);
		if(s[i]<0) l=min(l,i),r=max(r,i);
	}
	if(!r) return puts("0"),void();
	int x=max_element(s,s+l)-s,y=max_element(s+r,s+n+1)-s;
	bool ok=1;
	for(int i=x;i<=y;++i) ok&=(s[i]<=s[x]+s[y]);
	if(ok) return printf("1
%d %d
",x+1,y),void();
	int h=max_element(s,s+n+1)-s;
	printf("2
%d %d
%d %d
",1,h,h+1,n);
}
signed main() {
	int T; scanf("%d",&T);
	while(T--) solve();
	return 0;
}