#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >>n;
        string s;
        cin >> s;
        string ans = "";
        for(int i=0; i<n; i++){
            ans+='z';
        }
        if(ans>s){
            cout << ans << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
//https://www.codechef.com/problems/BIGNAME