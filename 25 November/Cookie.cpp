#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int min_waste = -1;

        for (int i = 0; i < N; i++) {
            if (A[i] >= K) {
                int waste = A[i] % K;
                if (min_waste == -1 || waste < min_waste) {
                    min_waste = waste;
                }
            }
        }

        cout << min_waste << endl;
    }

    return 0;
}
