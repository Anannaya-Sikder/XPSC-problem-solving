#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        sort(v.begin(), v.end());
        
        ll result = 0;
        if(n>2)
        {
            result = v[0]+v[1];
            for(int i=2; i<n; i++)
            {
                result += (2*v[i]);
            }
        }
        else
        {
            result += v[0]+v[1];
        }
        cout<< result <<endl;
    }

    return 0;
}
//https://vjudge.net/contest/684941#problem/C
