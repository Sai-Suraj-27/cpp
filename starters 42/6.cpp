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
        ll n;
        cin >> n;
        ll i, j, k;

        string s;
        cin >> s;
        ll c = 0;

        if (n == 2)
        {
            cout << 1 << endl;
        }
        else if (n >= 3)
        {
            i = 0;
            k = 0;
            ll k2 = 0;
            while (i < n - 1)
            {
                while (s[i] <= s[i + 1] && i < n - 1)
                {
                    k = 0;
                    k++;
                    i++;
                }
                if (k == 1)
                {
                    c++;
                }
                while (s[i] >= s[i + 1] && i < n - 1)
                {
                    k2 = 0;
                    k2++;
                    i++;
                }
                if (k2 == 1)
                {
                    c += 2;
                }
            }
        }
    }
    return 0;
}
