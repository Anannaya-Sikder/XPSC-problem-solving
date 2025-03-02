#include <bits/stdc++.h>
using namespace std;

bool isAlternating(string s){
    for(int i=0; i<s.size()-1; i++){
        if(s[i]==s[i+1])
        return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s; 
        cin >> s;
        int o=0;
        int z=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') z++;
            else o++;
        }

        int diff = abs(o-z);

        if(diff<=1){
            if(isAlternating(s)){
                cout << 0 << endl;
            }
            else cout << 1 << endl;
        }
        else if(diff<=3){
            cout << 2 << endl;
        }
        else cout << 3 << endl;
    }

}

//https://www.codechef.com/problems/P4_175