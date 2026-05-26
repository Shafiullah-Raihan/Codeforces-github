#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    cin>>n;
    while(n--) {
        int x1, y1, z1;
        int x2, y2, z2;
        long long int ans = 0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        int step1 = min(z1, y2);
        ans += 2ll * step1;
        z1 -= step1;
        y2 -= step1;
        int step2=min(y1,y2+x2);
        y1-=step2;
        if(y1>0)
            ans-=2ll*min(y1,z2);
        cout << ans<<endl;
    }
    return 0;
}