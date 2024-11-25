#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        string S, K;
        cin >> S >> K;

        int min_moves = INT_MAX;
        for (int i = 0; i <= N - M; i++) {
            int moves = 0;
            for (int j = 0; j < M; j++) {
                int diff = S[i + j] - K[j];
                int forward_moves = (diff + 10) % 10;
                int backward_moves = (10 - forward_moves) % 10; 

                moves += min(forward_moves, backward_moves);
            }
            min_moves = min(min_moves, moves);
        }

        if (min_moves == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << min_moves << endl;
        }
    }

    return 0;
}
