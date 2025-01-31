#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long x;
    cin >> x;

    int count = 0;
    for (long long k = 1; ; k++) {
        if (k * k > x) {
            break;
        }
        if (x - k * (x / k) == 0) {
            count = count + 1;
            if (k != x / k) {
                count = count + 1;
            }
        }
    }

    cout << count << endl;
    return 0;
}
