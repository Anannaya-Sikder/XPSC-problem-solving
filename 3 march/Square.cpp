#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        vector<int> x(4), y(4);
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        int side = x[3] - x[0];
        cout << side * side << endl;
    }
    return 0;
}
//https://codeforces.com/problemset/problem/1921/A