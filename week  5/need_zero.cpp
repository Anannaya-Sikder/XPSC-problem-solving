#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      int n, XOR = 0;
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++) {
         cin >> a[i];
         XOR ^= a[i];
      }

      int ans = -1;
      for (int x = 0; x < (1 << 8); x++) {
         int currXOR = 0;
         for (int i = 0; i < n; i++) {
            currXOR ^= (a[i] ^ x);
         }
         if (currXOR == 0) {
            ans = x;
            break;
         }
      }

      cout << ans << '\n';
   }
   return 0;
}
