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

    ll n, k;
    cin >> n >> k;

    vll A;
    vll P;

    ll i, j, k;

    for (i = 0; i < n; i++)
    {
        cin >> k;
        A.pb(k);
    }
    for (i = 0; i < n; i++)
    {
        cin >> k;
        P.pb(k);
    }

    return 0;
}
