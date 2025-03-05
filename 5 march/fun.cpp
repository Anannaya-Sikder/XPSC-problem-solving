#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    cin >> X >> Y;

    if (X >= Y) {
        cout << 0 << endl;
        return 0;
    }

    cout << (Y - 1) / X << endl;
    return 0;
}

//https://www.codechef.com/START176D/problems/RURT
