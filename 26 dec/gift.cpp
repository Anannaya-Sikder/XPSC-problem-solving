#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int H, L, W;
        cin >> H >> L >> W;
        
        int surface_area = 2 * (L*W + H*W + H*L);
        
        int max_gifts = 1000 / surface_area;
        
        cout << max_gifts << endl;
    }
    return 0;
}

//https://www.codechef.com/START166D/problems/WRAPGIFTS