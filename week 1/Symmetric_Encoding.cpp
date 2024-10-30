#include <bits/stdc++.h>

#define long long int

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string b;
        cin >> b;

        set<char> unique_chars(b.begin(), b.end());
        vector<char> r(unique_chars.begin(), unique_chars.end());
        sort(r.begin(), r.end());

        int len = r.size();
        vector<char> decode_map(256);
        
        for (int i = 0; i < len; ++i) {
            decode_map[r[i]] = r[len - i - 1];
        }

        for (char c : b) {
            cout << decode_map[c];
        }
        cout << '\n';
    }
    return 0;
}
