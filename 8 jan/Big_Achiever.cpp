#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        int A[n];
        
        for (int i = 0; i < n; i++) 
            cin >> A[i];
        
        for (int i = 0; i < n; i++) {
            bool isHappy = true;
            for (int j = 0; j < i; j++) {
                if (A[j] >= A[i]) {
                    isHappy = false;
                    break;
                }
            }
            cout << (isHappy ? "1" : "0") << (i == n-1 ? "\n" : " ");
        }
    }
    return 0;
}
//https://www.codechef.com/START168D/problems/BIG