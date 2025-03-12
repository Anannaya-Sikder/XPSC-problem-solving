#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        int X, Y, K;
        cin >> X >> Y >> K;
        
        int diff = abs(X - Y);
        if (diff == K) {
            cout << 0 << endl;
        } else if (K > X + Y) {
            cout << -1 << endl;
        } else if ((diff - K) % 2 != 0) {
            cout << -1 << endl;
        } else {
            cout << abs(diff - K) / 2 << endl;
        }
    }
    return 0;
}
//https://www.codechef.com/START177D/problems/BOX2