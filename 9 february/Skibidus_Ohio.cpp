#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int freq[26] = {};
        for (char c : s) {
            freq[c - 'a'] = 1;
        }
        int unique_count = 0;
        for (int i = 0; i < 26; i++) {
            unique_count += freq[i];
        }
        cout << unique_count << endl;
    }
    
    return 0;
}
