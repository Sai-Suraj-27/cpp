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
        // this diff is the max points of a team that is the winning team, assuming it wins all the matches it plays.
        ll diff = 3 * (n - 1);
        diff -= 3 * (floor((n - 1) / 2));
        // This is we are subtracting the points of 2nd highest score team, it will win a min no.of matches = floor(n-1)/2; as if a team in
        // 2nd position looses more matches than this then there will be definitely a team which won atleast these many matches.
        cout << diff << endl;
    }

    return 0;
}
