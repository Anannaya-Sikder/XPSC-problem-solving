#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }

        deque<int> bonusDeck;
        long long totalPower = 0;

        // Process each card from top to bottom
        for (int i = 0; i < n; i++) {
            if (cards[i] > 0) {
                // It's a bonus card, insert it in sorted order in the deque
                auto pos = lower_bound(bonusDeck.begin(), bonusDeck.end(), cards[i], greater<int>());
                bonusDeck.insert(pos, cards[i]);
            } else {
                // It's a hero card
                if (!bonusDeck.empty()) {
                    // Add the largest bonus to this hero and remove it from the deque
                    totalPower += bonusDeck.front();
                    bonusDeck.pop_front();
                }
            }
        }

        cout << totalPower << endl;
    }

    return 0;
}
