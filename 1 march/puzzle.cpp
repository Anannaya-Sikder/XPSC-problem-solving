#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int sum = 0, max_sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        
        max_sum = sum;
        int p = 0;
        
        for (int i = 0; i < n; i++) {
            p += a[i];
            max_sum = max_sum > sum - 2 * p ? max_sum : sum - 2 * p;
        }
        
        cout << max_sum << endl;
    }
    
    return 0;
}

//https://codeforces.com/problemset/problem/1933/A