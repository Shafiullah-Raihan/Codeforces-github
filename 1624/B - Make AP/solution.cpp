#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve()
{
    int a , b , c; cin >> a >> b >> c;
    if( ( 2 * b - c ) >  0 && ( 2 * b - c ) % a == 0 || ( a + c ) % ( 2 * b ) == 0 || ( 2 * b - a ) > 0 && ( 2 * b - a ) % c == 0 ) puts("YES");
    else puts("NO");
}
signed main()
{
    int tt; cin >> tt;
    while(tt--)solve();
    return 0;
}