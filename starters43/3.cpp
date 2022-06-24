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

        string s;
        cin >> s;
        string s1 = "";
        for (ll i = 0; i < n - 1; i++)
        {
            if (s[i] == '0' && s[i + 1] == '0')
            {
                s1 += "A";
            }
            else if (s[i] == '0' && s[i + 1] == '1')
            {
                s1 += "T";
            }
            if (s[i] == '1' && s[i + 1] == '0')
            {
                s1 += "C";
            }
            if (s[i] == '1' && s[i + 1] == '1')
            {
                s1 += "G";
            }
        }
    }

    return 0;
}
