#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long T;
    cin >> T;
    
    while (T--) {
        long long N;
        cin >> N;
        
        vector<long long> A(N);
        for (long long i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        sort(A.begin(), A.end());
        long long same_count = 0;
        for (long long i = 1; i < N; i++) {
            if (A[i] == A[i - 1]) {
                same_count++;
            }
        }
        
        cout << N - same_count << endl;
    }
    
    return 0;
}

