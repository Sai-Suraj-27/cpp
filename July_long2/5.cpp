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


int main()
{
    // your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;

    while(t--)
    {
        ll n,m;
        cin >> n >> m;

        // 1 <= a, b <= m;
        // __gcd(a,b) >= n

        if(m==n)
        {
            cout << m << " " << m << endl;
        }
        else if(m%n == 0)
        {
            cout << n << " " << m << endl;
        }
        else
        {
            // without loss of generality lets find a,b such that a<=b;
            // So, now both a,b should be >= n;
            // as if atleast 1 of them is < n; then __gcd(a,b) will be < n;

            // Hence both a&b >= n && <=m;
            // now we should find n,m such that m%n == 0 and m-n is max;

            // 10 79
            // 11 73
            // 11 91
            // 10 85
            // 10 95, 10 971
            
            ll a=n,b=m;
            ll diff = 0;
            ll curr_diff = 0;
            ll i = n;
            for(i=n;i<=m;i++)
            {
                // ll q = m/i;
                if(m-i < diff)
                {
                    break;
                }
                ll rem = m%i;
                curr_diff = (m-rem)-i;
                if(curr_diff >= diff)
                {
                    a = i;
                    b = m-rem;
                    diff = curr_diff;
                }
            }
            cout << a << " " << b << endl;
        }        
    }

    return 0;
}

