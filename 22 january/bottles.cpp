#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, X;
        cin >> N >> X;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A.rbegin(), A.rend()); // Sort in descending order
        int bottles = 0, current_capacity = 0;

        for (int i = 0; i < N; i++) {
            if (current_capacity + A[i] <= X) {
                current_capacity += A[i];
            } else {
                bottles++;
                current_capacity = A[i];
            }
        }

        if (current_capacity > 0) {
            bottles++;
        }

        cout << bottles << endl;
    }

    return 0;
}
