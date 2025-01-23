#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin>>t;
    while(t--)
    {
        int n,x; cin>>n>>x;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        int total = 0;
        for(int i=0; i<n; i++){
            total += v[i];
        }

        if( total%x == 0 ) cout<< total/x <<"\n";
        else cout<< (total/x)+1 <<"\n";
    }
    

    return 0;
}

//https://www.codechef.com/problems/MINBOTTLES