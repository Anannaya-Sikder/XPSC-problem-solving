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
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        set<int> present(A.begin(), A.end());
        int missing_count = 0;
        for (int i = 1; i <= N; i++) {
            if (present.find(i) == present.end()) {
                missing_count++;
            }
        }

        cout << missing_count << endl;
    }

    return 0;
}
