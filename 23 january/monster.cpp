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
        ll n,x; cin>>n>>x;
        vector<ll> v(n);
        for(ll i=0; i<n; i++){
            cin>>v[i];
        }
        sort( v.rbegin(), v.rend() );
        ll ans=0,hp=0;

        for(ll i=0; i<n; i++)
        {
            ans = max(ans,v[i]+hp);
            hp += x;
        }
        cout<< ans <<'\n';
    }
    

    return 0;
}

//https://www.codechef.com/problems/KO_MON