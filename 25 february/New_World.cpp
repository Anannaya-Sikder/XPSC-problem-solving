#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;
        
        int max_sum = n * p;
        int min_sum = -n * p;
        
        if (k > max_sum || k < min_sum) {
            cout << -1 << endl;
            continue;
        }
        
        int abs_k = abs(k);
        int result = (abs_k + p - 1) / p;
        cout << result << endl;
    }
    
    return 0;
}

//https://codeforces.com/contest/2072/problem/A