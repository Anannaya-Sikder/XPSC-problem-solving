#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int x = 0, move = 1, turn = 0;
        while (abs(x) <= n) {
            if (turn % 2 == 0) {
                x -= move;
            } else {
                x += move;
            }
            move += 2;
            turn++;
        }
        
        if (turn % 2 == 0) {
            cout << "Kosuke" << endl;
        } else {
            cout << "Sakurako" << endl;
        }
    }
    
    return 0;
}

//https://vjudge.net/contest/691642#problem/A