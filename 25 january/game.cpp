#include<bits/stdc++.h>
using namespace std;
bool can_alice_win(string s) {
    int moves = 0;
    
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i+1]) {
            moves++;
        }
    }
    
    return moves % 2 == 1;
}
int main()
{
  ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        cout << (can_alice_win(s) ? "DA" : "NET") << endl;
    }
    return 0;
}