#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string a;
        cin >> a;
        
        vector<int> freq(7, 0);
        for (int i = 0; i < n; i++) {
            freq[a[i] - 'A']++;
        }
        
        int missing = 0;
        for (int i = 0; i < 7; i++) {
            if (freq[i] < m) {
                missing += (m - freq[i]);
            }
        }
        
        cout << missing << endl;
    }
    
    return 0;
}

//https://vjudge.net/contest/691643#problem/A
