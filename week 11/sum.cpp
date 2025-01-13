#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        sort(A.rbegin(), A.rend());

        long long sum = 0;
        for (int i = 0; i < N - 1; ++i) {
            sum += A[i] + A[i + 1];
        }

        cout << sum << endl;
    }

    return 0;
}
