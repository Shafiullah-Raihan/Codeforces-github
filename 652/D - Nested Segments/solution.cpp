#include <bits/stdc++.h>
using namespace std;
#define F first
#define S second
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
int main(){
ios::sync_with_stdio(0);cin.tie(0);
int x; cin>>x;
pair<pair<int,int>,int>a[x];
ordered_set s;
int ans[x];
for(int i=0;i<x;i++)
cin>>a[i].F.F>>a[i].F.S,a[i].S=i;
sort(a,a+x);
for(int i=x-1;i>=0;i--){
ans[a[i].S]=s.order_of_key(a[i].F.S);
s.insert(a[i].F.S);
}
for(int i=0;i<x;i++)cout<<ans[i]<<"
";
return 0;
}