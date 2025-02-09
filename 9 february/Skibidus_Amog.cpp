#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string W;
        cin >> W;
        string S = "";
        for (int i = 0; i < W.size() - 2; i++) {
            S += W[i];
        }
        S += "i";
        cout << S << "\n";
    }
    return 0;
}

//https://codeforces.com/contest/2065/problem/A