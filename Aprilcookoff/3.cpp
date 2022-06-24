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
        ll i=0,j,k;
        vll v;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        if(n==1)
        {
            cout << v[0] << endl;
        }
        else if(n==2)
        {
            cout << v[0] + v[1] << endl;
        }
        ll sum = INT_MIN;
        for(i=0;i<n-1;i++)
        {
            if(v[i] + v[i+1] > sum)
            {
                sum = v[i] + v[i+1];
            }
        }
        if(sum > v[0]+v[n-1])
        {
            cout << sum << endl;
        }
        else
        {
            cout << v[0]+v[n-1] << endl;
        }


    }

    return 0;
}
