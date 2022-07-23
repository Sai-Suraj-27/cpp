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
            
            /*
            ll n1,m1,n2,m2,n3,m3;
            n1 = cn(n,m).first;
            m1 = cn(n,m).second;
            n2 = cm(n,m).first;
            m2 = cm(n,m).second;
            n3 = cboth(n,m).first;
            m3 = cboth(n,m).second;
            ll d1 = abs(m1-n1);
            ll d2 = abs(m2-n2);
            ll d3 = abs(m3-n3);
            if(d1 >= d2 && d1 >= d3)
            {
                cout << n1 << " " << m1 << endl;
            }
            else if(d2 >= d1 && d2 >= d3)
            {
                cout << n2 << " " << m2 << endl;
            }
            else
            {
                cout << n3 << " " << m3 << endl;
            }
            */
            // 10 79
            // 11 73
            ll rem = m%n;
            ll q = m/n;
            
            while(m%n !=0)
            {
                rem = m%n;
                q = m/n;
                
                if(rem < q)
                {
                    m--;
                }
                else
                {
                    n++;
                }
            }
            cout << n << " " << m << endl;
        }
        
    }

    return 0;
}

