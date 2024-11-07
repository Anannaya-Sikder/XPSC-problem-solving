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

        for (int i = 0; i < n; i++) {
            if (cards[i] > 0) {
                auto pos = lower_bound(bonusDeck.begin(), bonusDeck.end(), cards[i], greater<int>());
                bonusDeck.insert(pos, cards[i]);
            } else {
                if (!bonusDeck.empty()) {
                    totalPower += bonusDeck.front();  
                    bonusDeck.pop_front(); 
                }
            }
        }

        cout << totalPower << "\n";
    }

    return 0;
}
