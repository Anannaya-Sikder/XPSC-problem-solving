#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long X, Y;
    cin >> X >> Y;
    
    if (X + 10 * Y >= 100) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}


//https://www.codechef.com/START174D/problems/HWFIN