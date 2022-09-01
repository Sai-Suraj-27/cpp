#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;








int main()
{
    ll n;
    cin >> n;

    vll v;
    ll i,j,k;

    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k-(i+1));
    }

    // sigma (v[i]-i) - x shoud be min;
// 10 8 6 4 2 0 -2 -4 -6 -8 -10
// med = 0;

    sort(v.begin(),v.end());

    ll med;
    if(n%2==1)
    {
        med = v[n/2];
    }
    else
    {
        med = v[n/2] + v[n/2 - 1];
    }

    ll mint = 0;

    for(i=0;i<v.size();i++)
    {
        mint += abs(v[i]-med);
    }
    cout << mint << endl;





    return 0;
}