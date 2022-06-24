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
        ll n, k;
        cin >> n >> k;
        ll x = (n / 2) * (pow(n + 1, 2)) - n;
        ll y = (n / 2) * (pow(n - 1, 2)) + n + (n - 1) * (1 - n + pow(n, 2));
        ll z = pow(n, 3);
        ll w = pow(n, 3) - pow(n - 1, 2);
        if (n % 2 == 1 && k == 1)
        {
            cout << "YES" << endl;
        }
        else if (n % 2 == 0)
        {
            cout << "YES" << endl;
        }

        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
