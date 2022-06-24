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
        ll n, x;
        cin >> n >> x;
        ll i, j, k;
        string s = "abcdefghijklmnopqrstuvwxyz";
        if (n == 1 && x == 1)
        {
            cout << 'z' << endl;
        }
        else if (n % 2 == 1 && x > (n + 1) / 2)
        {
            cout << -1 << endl;
        }
        else if (n % 2 == 0 && x > (n) / 2)
        {
            cout << -1 << endl;
        }
        else if (n % 2 == 0)
        {
            string s1 = "";
            string s2 = "";

            for (i = 0; i < n / 2; i++)
            {
                j = i % x;
                s1 = s1 + s[j];
                s2 = s[j] + s2;
            }
            s1 += s2;
            cout << s1 << endl;
        }
        else if (n % 2 == 1)
        {
            string s1 = "";
            string s2 = "";
            for (i = 0; i < n / 2; i++)
            {
                j = i % x;
                s1 = s1 + s[j];
                s2 = s[j] + s2;
            }
            if (i < x)
            {
                s1 += s[i];
            }
            else
            {
                s1 += 'a';
            }
            s1 += s2;
            cout << s1 << endl;
        }
    }

    return 0;
}
