#include <bits/stdc++.h>
using namespace std;

#define long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int result = -1;
        for (int x = 0; x < 256; x++) {
            int xor_sum = 0;
            for (int i = 0; i < n; i++) {
                xor_sum ^= (a[i] ^ x);
            }
            if (xor_sum == 0) {
                result = x;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}
