#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int X, Y;
        cin >> X >> Y;
        
        string first = "";
        
        for (int i = 0; i < X / 2; i++) first += '1';
        for (int i = 0; i < Y / 2; i++) first += '2';
        
        string second = first;
        reverse(second.begin(), second.end());
        
        cout << first + second << endl;
    }
    
    return 0;
}


//https://www.codechef.com/START172D/problems/SMLPAL