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

    ll n,m;
    cin >> n >> m;

    ll i,j,k;
    vll a;
    vll b;
    for(i=0;i<n;i++)
    {
        cin >> k;
        a.pb(k);
    }
    for(i=0;i<m;i++)
    {
        cin >> k;
        b.pb(k);
    }

    i=0;
    j=0;

    while(j<m)
    {
        if(i==n)
        {
            cout << i << " ";
            j++;
        }
        else if(a[i] < b[j])
        {
            i++;
        }
        else
        {
            cout << i << " ";
            j++;
        }
    }
    return 0;
}
