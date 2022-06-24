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

    vll v;
    ll i, n, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        v.pb(k);
    }
    sort(all(v));
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> k;
        ll low = 0, high = n - 1;
        if (v[0] > k)
        {
            cout << -1 << endl;
        }
        else
        {
            while (low <= high)
            {
                ll mid = low + (high - low) / 2;
                if (v[mid] == k)
                {
                    cout << v[mid] << endl;
                    break;
                }
                else if (v[mid] < k)
                {
                    low = mid + 1;
                }
                else if (v[mid] > k)
                {
                    high = mid - 1;
                }
            }
            if (low > high)
                cout << v[high] << endl;
        }
    }

    return 0;
}
