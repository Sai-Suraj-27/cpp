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
        ll x,y,n,r;
        cin >> x >> y >> n >> r;
        ll pre = 0,nor=0;

        if(n*x > r)
        {
            cout << -1 << endl;
        }
        else
        {
            // pre + nor == n  --> (1)
            // nor = n - pre;
            // y*pre + x*nor <= r  ---> (2)

            // y*pre + x*(n-pre) <= r;
            // pre(y-x) <= r-n*x

            // pre <= (r-n*x)/(y-x)
            // pre = floor((r-n*x)/(y-x));

            pre = floor((r-n*x)/(y-x));
            nor = n - pre;
            if(n*y <= r)
            {
                cout << 0 << " " << n << endl;
            }
            else if(pre > n)
            {
                cout << n << " " << 0 << endl;
            }
            else
                cout << nor << " " << pre << endl;

        }
    }

    return 0;
}
