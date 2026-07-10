#include<bits/stdc++.h>
using namespace std;
#define endl '
'
#define int long long 
const int MAX = 100100;
int vis[11]={0,25,18,15,12,10,8,6,4,2,1};
struct node{
    string s;
    int ans=0;
    int se[51]={0};
};
vector<node>ve;
void read(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a1=1;
        string str;
        cin>>str;
        for(auto &it:ve){
            if(it.s==str){
                it.se[i]++;
                if(i<=10){
                    it.ans+=vis[i];
                }
                a1=0;
                break;
            }
        }
        if(a1){
            ve.push_back({str});
            ve.back().se[i]++;
            if(i<=10){
                ve.back().ans+=vis[i];
            }
        }
    }
}
bool cmp1(node a,node b){
    if(a.ans!=b.ans) return a.ans>b.ans;
    for(int i=1;i<=50;i++){
        if(a.se[i]!=b.se[i]) return a.se[i]>b.se[i];
    }
    return 0;
}
bool cmp2(node a,node b){
    for(int i=1;i<=50;i++){
        if(a.se[i]!=b.se[i]) return a.se[i]>b.se[i];
        if(i==1)
        if(a.ans!=b.ans) return a.ans>b.ans;
    }
    return 0;
}
signed main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        read();
    }
    sort(ve.begin(),ve.end(),cmp1);
    cout<<ve[0].s<<endl;
    sort(ve.begin(),ve.end(),cmp2);
    cout<<ve[0].s<<endl;
    return 0;
}