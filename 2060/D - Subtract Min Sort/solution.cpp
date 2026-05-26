#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
 
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
 
        bool isPossible = true;
        int excess = 0; // Tracks the leftover amount to be subtracted
 
        for (int i = 0; i < n; i++)
        {
            if (arr[i] < excess)
            {
                isPossible = false;
                break;
            }
            excess = arr[i] - excess; // Update the leftover
        }
 
        if (isPossible)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}