#include <bits/stdc++.h>
using namespace std;

int digitSum(int x) {
    int sum = 0;
    while (x > 0) {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        long long total = 0;
        for (int i = 1; i <= n; i++) {
            total += digitSum(i);
        }
        
        cout << total << endl;
    }
    
    return 0;
}
