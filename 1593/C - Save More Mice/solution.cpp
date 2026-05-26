#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        priority_queue<int> pq;
        for (int i = 0; i < k; i++) {
            int x; 
            cin >> x;
            pq.push(x);
        }
 
        long long mice = 0, cnt = 0;
        while (!pq.empty()) {
            int largest = pq.top(); 
            pq.pop(); 
            cnt += (n - largest);
            if (cnt < n) {
                mice++;
            }
        }
        cout << mice << endl;
    }
    return 0;
}