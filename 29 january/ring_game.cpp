#include <bits/stdc++.h>
using namespace std;

int solve() {
    int M, K;
    string S;
    cin >> M >> K;
    cin >> S;
    int swishes = 0;
    for(char c : S) {
        if(c == 'S') swishes++;
    }
    
    if(swishes >= K) {
        return M;
    }
    
    int needed = K - swishes;
    return M + needed - 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while(T--) {
        cout << solve() << endl;
    }
    return 0;
}


//https://www.codechef.com/START171D/problems/SWISHGAME