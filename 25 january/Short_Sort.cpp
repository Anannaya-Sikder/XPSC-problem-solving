#include<bits/stdc++.h>
using namespace std;
bool can_make_abcabc(string s) {
    if (s == "abc") return true;
    
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            string temp = s;
            swap(temp[i], temp[j]);
            
            if (temp == "abc") return true;
        }
    }
    
    return false;
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
        if (can_make_abcabc(s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

//https://codeforces.com/problemset/problem/1873/A