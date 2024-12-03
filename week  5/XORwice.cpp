#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int T; cin >> T;
   while (T--){
   int a,b;
   cin >> a >> b;
   int x = (a&b);
   cout << ((a ^ x) + (b ^ x)) << endl;
   }
    return 0;
}