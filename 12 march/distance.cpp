#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
   cin.tie(nullptr);
   
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> X(n), Y(n);
        for (int i = 0; i < n; i++) cin >> X[i];
        for (int i = 0; i < n; i++) cin >> Y[i];
        
        int f = -1;
        for (int i = 0; i < n; i++) {
            int P = X[i];
            vector<pair<int, int>> L;
            for (int j = 0; j < n; j++) {
                L.push_back({abs(X[j] - P), X[j]});
            }
            sort(L.begin(), L.end());
            vector<int> t;
            for (int j = 0; j < n; j++) t.push_back(L[j].second);
            
            if (t == Y) {
                f = i + 1;
                break;
            }
        }
        cout << f << endl;
    }
    return 0;
}


//https://www.codechef.com/START177D/problems/ORDDIST