#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long T;
    cin >> T;
    while (T--) {
        long long N, X;
        cin >> N >> X;
        string S;
        cin >> S;
        
        long long swipes = 0;
        bool valid = true;
        
        for (char c : S) {
            if (c == '0') {
                if (swipes == 0) {
                    valid = false;
                    break;
                }
                swipes--;
            } else {
                swipes = X;
            }
        }
        
        cout << (valid ? "YES\n" : "NO\n");
    }
    
    return 0;
}


//https://www.codechef.com/problems/ACCESS