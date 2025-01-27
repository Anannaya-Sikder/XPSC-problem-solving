#include<bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int a,b,c,x;
   cin >> a >> b >> c >> x;
   int p = pow(x, 3);
   int q = a*b*c;
   if(p>q) cout << "Cube" ;
   else if(p<q) cout << "Cuboid";
   else cout << "Equal";
    return 0;
}

//https://vjudge.net/contest/689078#problem/A