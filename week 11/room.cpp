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

        int total_rooms = 0;
        for (int i = 0; i < N; ++i) {
            total_rooms += (A[i] + 1) / 2; 
        }

        cout << total_rooms << endl;
    }

    return 0;
}


//https://vjudge.net/contest/684941#problem/B