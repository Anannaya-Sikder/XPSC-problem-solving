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
        vector<vector<int>> a(n, vector<int>(n));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
        
        int magic_count = 0;
        for (int d = 0; d < n; d++) {
            int min_val = 0;
            for (int i = 0, j = d; i < n && j < n; i++, j++) {
                min_val = min(min_val, a[i][j]);
            }
            magic_count += -min_val;
        }
        
        cout << magic_count << "\n";
    }
    
    return 0;
}
