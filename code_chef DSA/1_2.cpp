#include<bits/stdc++.h>
#define pb push_back
#define ll long long
#define vll vector<ll>
using namespace std;













int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;
        ll i,j,k;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        v.erase(min_element(v.begin(),v.end()));
        cout << *min_element(v.begin(),v.end()) << endl;

    }







    return 0;
}