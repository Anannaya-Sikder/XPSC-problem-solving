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
        
        int A = 0, B = 0;
        for (int i = 0; i < 5; i++) {
            if (s[i] == 'A') {
                A++;
            } else {
                B++;
            }
        }
        
        if (A > B) {
            cout << 'A' << endl;
        } else {
            cout << 'B' << endl;
        }
    }
    
    return 0;
}


//https://codeforces.com/problemset/problem/1926/A