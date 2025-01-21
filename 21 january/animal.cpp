#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;

    while(T--)
    {
        int N; 
        cin >> N;

        int c = N / 4;        
        int h = (N - c * 4) / 2;  
        cout << c + h << endl;    
    }
    return 0;
}

//https://vjudge.net/contest/687543#problem/B
