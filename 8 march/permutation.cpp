#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    if (n == 1) {
        cout << 1 << endl;
    } else if (n <= 3) {
        cout << "NO SOLUTION" << endl;
    } else {
        for (int i = 2; i <= n; i += 2) {
            cout << i << " ";
        }
        for (int i = 1; i <= n; i += 2) {
            cout << i << " ";
        }
        cout << endl;
    }
    
    return 0;
}

//https://cses.fi/problemset/task/1070