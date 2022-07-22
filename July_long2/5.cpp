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
        else
        {
            // without loss of generality lets find a,b such that a<=b;
            // So, now both a,b should be >= n;
            // as if atleast 1 of them is < n; then __gcd(a,b) will be < n;

            // Hence both a&b >= n && <=m;

            if(m%n == 0)
            {
                cout << n << " " << m << endl;
            }
            else
            {
                ll a=m,b=n;
                while(true)
                {
                    if((m-1)%n == 0)
                    {
                        m--;
                    }
                    else if(m%(n+1) == 0)
                    {
                        n++;
                    }
                    else if((m-1)%(n+1) == 0)
                    {
                        m--;
                        n++;
                    }
                }
                while(true)
                {
                    if(m%n != 0)
                    {
                        m--;
                    }
                    if(m%n != 0)
                    {
                        n++;
                    }
                }

            }
            // now we should find n,m such that m%n == 0 and m-n is max;
            


        }
        





    }

    return 0;
}
