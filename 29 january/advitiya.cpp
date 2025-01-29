#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        string target = "ADVITIYA";
        int steps = 0;
        for (int i = 0; i < 8; i++) {
            int diff = (target[i] - S[i] + 26) % 26;
            steps += diff;
        }
        cout << steps << endl;
    }
    
    return 0;
}
//https://www.codechef.com/START171D/problems/ADVITIYA