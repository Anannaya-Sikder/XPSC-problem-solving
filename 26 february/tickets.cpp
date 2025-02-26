#include <bits/stdc++.h>
using namespace std;
int getTicketTime(int N) {
    int time = 0;
    while (N > 0) {
        if (N == 1 || N == 3) {
            return time + 1;
        }
        
        if (N == 2) {
            N = 1; 
        } else if (N > 3) {
            N = N - 2; 
        }
        
        time++;
    }
    
    return time;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        cout << getTicketTime(N) << endl;
    }
    
    return 0;
}
//https://www.codechef.com/START175D/problems/P2_175