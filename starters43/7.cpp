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
        ll a, b, c;
        cin >> a >> b >> c;

        ll ct = 0;

        vll v;
        v.pb(a);
        v.pb(b);
        v.pb(c);
        sort(all(v));

        a = v[0];
        b = v[1];
        c = v[2];
        ll i = 1;
        while (a < b or a < c or b < c)
        {
            if (b - a <= c - b)
            {
                a += pow(2, i - 1);
                ct++;
            }
            else
            {
                b += pow(2, i - 1);
                ct++;
            }

            i++;
        }
    }

    return 0;
}
