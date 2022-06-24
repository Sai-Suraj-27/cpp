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
using namespace std;

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        ll c = 0;
        while (y != x)
        {
            while (x < y)
            {
                x++;
                c++;
            }
            while (y < x)
            {
                y += 2;
                c++;
            }
        }
        cout << c << endl;
    }

    return 0;
}
