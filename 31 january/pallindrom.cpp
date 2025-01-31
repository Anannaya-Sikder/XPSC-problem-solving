#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, K;
    cin >> N >> K;
    string S;
    cin >> S;

    int count[26];
    for (int i = 0; i < 26; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < N; i++) {
        count[S[i] - 'a'] = count[S[i] - 'a'] + 1;
    }

    int odd_count = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            odd_count = odd_count + 1;
        }
    }

    if (K >= odd_count - 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
