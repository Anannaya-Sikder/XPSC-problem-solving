#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
   cin.tie(nullptr);
    

    int A, B, C;
    cin >> A >> B >> C;
    
    if (A + B > C && B + C > A && A + C > B) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}

//https://www.codechef.com/START177D/problems/TRICHECK