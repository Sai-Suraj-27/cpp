#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i, a, n) for (ll i = a; i < n; i++)
#define B(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ll long long int
#define ld long double
#define dd double double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
using namespace std;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/

int main()
{
    // your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        vll v;
        ll i, j, k;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> k;
            v.pb(k);
        }
        sort(all(v));
        for (i = 1; i < n - 1; i++)
        {
            double p = v[i] - v[i - 1];
            double q = v[i + 1] - v[i];
            if (q / p != 2 && q / p != 0.5)
            {
                if (p != 0 && q != 0)
                {
                    cout << "NO" << endl;
                    break;
                }
                else
                {
                    continue;
                }
            }
        }
        if (i >= n - 1)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
