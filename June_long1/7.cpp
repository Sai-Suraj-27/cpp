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
        ll x, y;
        cin >> x >> y;
        ll c = 0;
        ll p;
        ll N, A, B;
        if (x == y)
        {
            cout << x << endl;
        }
        else if (x == 0 && y != 0)
        {
            cout << -1 << endl;
        }
        else if (x != 0 && y == 0)
        {
            cout << -1 << endl;
        }
        else if (x < y)
        {

            N = floor(log2(y / x));
            c += N;
            x *= pow(2, N);
            if (x == y)
            {
                c += x;
                cout << c << endl;
            }
            else
            {
                p = 2 * x - y;
                x = x - p;
                y = y - p;
                c += p;
                c += 1;
                x = 2 * x;
                c += x;
                cout << c << endl;
            }
        }
        else
        {
            N = floor(log2(x / y));
            c += N;
            y *= pow(2, N);
            if (x == y)
            {
                c += x;
                cout << c << endl;
            }
            else
            {
                p = 2 * y - x;
                y = y - p;
                x = x - p;
                c += p;
                c += 1;
                y = 2 * y;
                c += y;
                cout << c << endl;
            }
        }
    }

    return 0;
}
