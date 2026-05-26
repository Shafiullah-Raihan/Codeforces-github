#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int MX=100100;
int n,m,x,y,ans[MX],cnt[MX];
pair<int,int> a[MX];
queue<int> q[2][2];
vector<int> g[MX];
char s[7];
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>s;
    a[i].first=int(s[0]=='s');
    cin>>s;
    a[i].second=int(s[0]=='t');
  }
  cin>>m;
  while(m--){
    cin>>x>>y;
    g[x].push_back(y);
    ++cnt[y];
  }
  for(int i=1;i<=n;i++) if(cnt[i]==0) q[a[i].first][a[i].second].push(i);
  x=0;
  for(int i=1;i<=n;i++){
    if(!q[x][0].empty()) {
      ans[i]=q[x][0].front();
      q[x][0].pop();
    }
    else if(!q[x^1][1].empty()){
      ans[i]=q[x^1][1].front();
      q[x^1][1].pop();
      x^=1;
    }
    else{
      cout<<"-1
";
      return 0;
    }
    for(int j:g[ans[i]]) if(--cnt[j]==0) q[a[j].first][a[j].second].push(j);
  }
  for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
  cout<<'
';
  return 0;
}
 