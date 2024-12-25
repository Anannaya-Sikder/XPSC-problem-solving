#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> max_penalty(100001, 0);  
        for (int i = 1; i <= N; i++) {
            int return_day;
            cin >> return_day;
            max_penalty[return_day] = max(max_penalty[return_day], i);
        }
        
        int total_penalty = 0;
        for (int penalty : max_penalty) {
            total_penalty += penalty;
        }
        
        cout << total_penalty << endl;
    }
    return 0;
}



//https://www.codechef.com/START166D/problems/BORROWBOOK