#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
   cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int X, Y, Z, A, B, C;
        cin >> X >> Y >> Z >> A >> B >> C;
        
        int happy = 0;
        
        int give = min(X, A);
        happy += give;
        X -= give;
        A -= give;
        
        give = min(Y, B);
        happy += give;
        Y -= give;
        B -= give;
        
        give = min(Z, C);
        happy += give;
        Z -= give;
        C -= give;
        
        give = min(Y, A);
        happy += give;
        Y -= give;
        A -= give;
        
        give = min(Z, B);
        happy += give;
        Z -= give;
        B -= give;
        
        give = min(Z, A);
        happy += give;
        Z -= give;
        A -= give;
        
        cout << happy << endl;
    }
    return 0;
}
//https://www.codechef.com/START176D/problems/XLSL