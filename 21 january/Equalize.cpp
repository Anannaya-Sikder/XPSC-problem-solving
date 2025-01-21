#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.length();
    if (n == 1) return 0;

    int ops_to_zero = 0, ops_to_one = 0;
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || s[i] != s[i-1]) {
            if (s[i] == '1') {
                ops_to_zero++;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || s[i] != s[i-1]) {
            if (s[i] == '0') {
                ops_to_one++;
            }
        }
    }
    
    return min(ops_to_zero, ops_to_one);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    
    return 0;
}

//https://vjudge.net/contest/687543#problem/D