#include <bits/stdc++.h>
using namespace std;
int a[1000010];
void solve()
{
    int n,m;
    cin>>n>>m;
    for (int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+1+n);
    int l=n;
    while (l>0&&m>=a[l]) m=m-a[l--];
    cout<<m<<"
";
}
int main()
{
    int t;
    cin>>t;
    while (t--) solve();
}