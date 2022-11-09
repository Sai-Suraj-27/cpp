#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;














int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n,x;
        cin>> n >> x;

        vll v;
        ll i,j,k;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        ll cost=0;
        for(i=1;i<n;i++)
        {
            if(v[i] == 1 or v[i-1] == 1)
            {
                cost += x;
            }
        }
        if(v[0] == 1)
            cost += x;

        cout << cost << endl;






    }











    return 0;
}