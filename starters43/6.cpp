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
        ll n;
        cin >> n;
        ll i = 0, c = 0;
        for (i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0 && i != sqrt(n))
            {
                c += 2;
            }
            if (i == sqrt(n))
            {
                c++;
            }
        }
        c--;
        if (n % 2 == 0)
        {
            cout << c * 2 - 1 << endl;
        }
        else
        {
            cout << 2 * c << endl;
        }
    }

    return 0;
}
