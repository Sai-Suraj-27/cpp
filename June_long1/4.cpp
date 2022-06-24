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

bool isequal(string a, string b)
{
    ll i = 0;
    for (i = 0; i < sz(a); i++)
    {
        if (a[i] != b[i])
        {
            return false;
        }
    }
    return true;
}

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
        string a;
        cin >> a;
        string b;
        cin >> b;

        ll c = 0;

        ll i;
        char j, k;
        map<char, ll> mp;
        for (i = 0; i < n; i++)
        {
            k = b[i];
            if (a[i] != b[i])
            {
                mp.insert({b[i], i});
            }
        }

        cout << sz(mp) << endl;
    }

    return 0;
}
