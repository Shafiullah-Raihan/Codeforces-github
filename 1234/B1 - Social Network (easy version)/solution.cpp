#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if (find(ans.begin(),ans.end(),b) == ans.end())
        {
            if (int(ans.size()) >= k)
            {
                ans.pop_back();
            }
            ans.insert(ans.begin(),b);
        }
    }
    cout << ans.size() << endl;
    for (int i : ans)
    {
        cout << i << ' ';
    }
}