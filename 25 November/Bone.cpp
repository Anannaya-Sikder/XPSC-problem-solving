#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M, X, Y;
    cin >> N >> M >> X >> Y;

    if ((N == 0 || X == 0) && (M == 0 || Y == 0))
        cout << "0";
    else
        cout << (N * X + M * Y);

    return 0;
}
