#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        
        if(n == 1) {
            int x;
            cin >> x;
            cout << "YES" << endl;
            continue;
        }
        
        if(n == 2) {
            int x, y;
            cin >> x >> y;
            if(x == y) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
            continue;
        }
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
        }
        cout << "YES" << endl;
    }
    return 0;
}

////https://vjudge.net/contest/689078#problem/E