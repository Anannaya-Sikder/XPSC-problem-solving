#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        vector<string> over(6);
        for (int i = 0; i < 6; i++) {
            cin >> over[i];
        }
        
        int h = 0;
        for (int i = 0; i <= 3; i++) {
            if (over[i] == "W" && over[i + 1] == "W" && over[i + 2] == "W") {
                h = 1;
                break;
            }
        }
        
        cout << (h ? "YES\n" : "NO\n");
    }
    
    return 0;
}

//https://www.codechef.com/problems/HATTRICK