#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        for(int &x : v)  cin>>x;
        
        sort(v.begin(), v.end());

        int count = 0, mid = ((n+1)/2)-1;
        
        for(int i=mid; i<n; i++){
            if( v[i]==v[mid] ) count++;
        }
        cout<< count <<'\n';
    }

    return 0;
}

//https://codeforces.com/problemset/problem/1946/A
