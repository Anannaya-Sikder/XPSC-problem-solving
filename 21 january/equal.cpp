#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string A, B;
        cin >> A >> B;

        int min_hamming = M;

        for (int i = 0; i <= N - M; ++i) {
            int hamming_distance = 0;

            for (int j = 0; j < M; ++j) {
                if (A[i + j] != B[j]) {
                    ++hamming_distance;
                }
            }

            if (hamming_distance < min_hamming) {
                min_hamming = hamming_distance;
            }
        }

        cout << min_hamming << endl;
    }

    return 0;
}

//https://vjudge.net/contest/687543#problem/C