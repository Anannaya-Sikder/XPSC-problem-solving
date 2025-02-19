#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll T;
    cin >> T;
    
    while (T--) {
        ll N;
        cin >> N;
        
        vector<ll> A(N);
        for (ll i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        sort(A.begin(), A.end());
        
        ll maxGcd = A[N - 1];
        ll count = 0;
        
        for (ll i = N - 1; i >= 0; i--) {
            if (gcd(maxGcd, A[i]) == maxGcd) {
                count++;
            }
        }
        
        cout << count + maxGcd << "\n";
    }
    
    return 0;
}