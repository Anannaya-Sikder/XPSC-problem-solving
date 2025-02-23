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
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        set<int> s;
        bool valid = true;
        
        for (int i = 0; i < n; i++) {
            if (!s.empty() && !s.count(a[i] - 1) && !s.count(a[i] + 1)) {
                valid = false;
                break;
            }
            s.insert(a[i]);
        }
        
        cout << (valid ? "YES" : "NO") << "\n";
    }
    
    return 0;
}

//https://codeforces.com/problemset/problem/2000/B
