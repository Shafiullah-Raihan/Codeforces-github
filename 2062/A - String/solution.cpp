#include <bits/stdc++.h>
using namespace std;
 
void process_string(const string& s, int& ones_count, int& cnt) {
    ones_count = 0;
    cnt = 0;
 
    char prev_char = '0';
 
    for (char c : s) {
        if (c == '1') {
            ones_count++;
            if (prev_char == '0') {
                cnt++;
            }
        }
        prev_char = c; // Update the previous character
    }
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        string s;
        cin >> s;
 
        int ones_count = 0, cnt = 0;
        process_string(s, ones_count, cnt);
 
        cout << ones_count << endl;
    }
 
    return 0;
}