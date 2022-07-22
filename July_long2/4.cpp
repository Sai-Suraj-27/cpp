#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i, a, n) for (ll i = a; i < n; i++)
#define B(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
ll mod = 1e9 + 7;
using namespace std;


int main()
{
    // your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vll v;
        ll i,j,k;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        ll c = 0;
        ll fa = 0;
        for(i=n-1;i>=0;i--)
        {
            if(v[i] == 1)
            {
                c++;
            }
            else
            {
                fa += (c*(c+1)/2);
                c = 0;  
            }
        }
        fa += c*(c+1)/2;

        cout << fa << endl;
    }

    return 0;
}
