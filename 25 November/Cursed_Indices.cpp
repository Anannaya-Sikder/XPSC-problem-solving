#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Sort the array in ascending order
        sort(A.begin(), A.end());

        long sum = 0;
        int cursedCount = 0;

        // Check for cursed indices
        for (int i = 1; i < N; i++) {
            if (sum >= A[i]) {
                cursedCount++;
            }
            sum += A[i-1];
        }

        // Output the result
        cout << cursedCount << endl;
        for (int i = 0; i < N; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
