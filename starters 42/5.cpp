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
        ll a, b;
        cin >> a >> b;

        ll c = 0;
        if (a % 3 == 0 || b % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (a == b && a % 3 != 0)
        {
            cout << 0 << endl;
        }
        else
        {
            a = abs(a - b);
            if (a % 3 == 0)
            {
                cout << 1 << endl;
            }
            else
            {
                a = abs(a - b);
                if (a % 3 == 0)
                {
                    cout << 2 << endl;
                }
                else
                {
                    b = abs(a - b);
                    if (b % 3 == 0)
                    {
                        cout << 2 << endl;
                    }
                    else
                    {
                        cout << 3 << endl;
                    }
                }
            }
        }
    }

    return 0;
}
