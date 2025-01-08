#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    
    while(T--) {
        int N;
        cin >> N;
        
        string A, B;
        cin >> A >> B;
        
        int m = 0;  
        int l = 0;  
        
        for(int i = 0; i < N; i++) {
            if(A[i] == '1' && B[i] == '1') {
                m++;
            }
            else if(A[i] == '1' || B[i] == '1') {
                l++;
            }
        }
        
        if(m % 2 == 1 || l > 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}

//https://www.codechef.com/START168D/problems/P2P