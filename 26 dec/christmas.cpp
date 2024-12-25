#include <bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    
    int total_hours = X;
    int activities = 0;
    
    if (total_hours >= 1) {
        activities++;
        total_hours -= 1;
    }
    if (total_hours >= 2) {
        activities++;
        total_hours -= 2;
    }
    if (total_hours >= 4) {
        activities++;
    }
    
    cout << activities << endl;
    return 0;
}

//https://www.codechef.com/START166D/problems/MERRYXMAS