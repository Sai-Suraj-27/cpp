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

        ll diff = abs(a - b);
        ll i, j;
        ll c = 0;
        ll g = __gcd(a, b);

        for (i = 1; i < sqrt(diff); i++)
        {
            if (diff % i == 0)
            {
                c += 2;
            }
        }
        if (sqrt(diff) == i)
        {
            c++;
        }
        cout << c << endl;
    }

    return 0;
}

// All the new gcds that can come (that are possible) are the
// factors of diff; if we observe the pattern properly.
// So, now it's just finding the total factors of the diff;
// Do this in O(sqrt(n)); not in O(n);
