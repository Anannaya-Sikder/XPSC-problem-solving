#include <bits/stdc++.h>
using namespace std;

#define long long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long T;
    cin >> T;

    while (T--) {
        long N, D;
        cin >> N >> D;

        vector<long> A(N);
        for (long i = 0; i < N; i++) {
            cin >> A[i];
        }

        long switches = 0;
        long currentGun = 0; 

        for (long i = 0; i < N; i++) {
            if (A[i] <= D && currentGun == 1) {
                switches++;
                currentGun = 0;
            } else if (A[i] > D && currentGun == 0) {
                switches++;
                currentGun = 1;
            }
        }

        cout << switches << endl;
    }

    return 0;
}


//https://vjudge.net/contest/689078#problem/B