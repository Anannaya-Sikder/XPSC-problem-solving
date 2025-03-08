#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long T, N;
    cin >> T;
    while (T--) {
        cin >> N;
        long S = 0;
        while (N) {
            S += (N & 1);
            N >>= 1;
        }
        if (S % 2 == 0) cout << "EVEN" << endl;
        else cout << "ODD" << endl;
    }
    
    return 0;
}

//https://www.codechef.com/problems/BINPARITY