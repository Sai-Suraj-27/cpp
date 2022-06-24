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
        // max no.of pooks to placed -> we have to minimize the influence sphere of each of them.
        // In a row or columns we can have only 1 rook.
        // so if we start from left bottom then
        // n<2 -> 1, n=3 -> 2, n=4 -> 3
        // This is imp qn it has 4 cases. for n<=2 only 1 rook is possible
        // for n=3 case, 2 rooks are possible and from n>=4 'n' rooks are possible for any N*N grid

        // IMP: Do not start from one corner, start from middle of first column...so that no.of options might(will) increase.

        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else if (n == 3)
        {
            cout << n - 1 << endl;
        }
        else
        {
            cout << n << endl;
        }
    }

    return 0;
}
