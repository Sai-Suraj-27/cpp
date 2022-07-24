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
ll modulo = 998244353;
using namespace std;
ll fac[100000];
ll fact(ll n)
{
    ll c = 1;
    fac[0] = c;
    for(ll i=1;i<=n;i++)
    {
        c *= i;
        c = c%modulo;
        fac[i] = c;
    }
}

ll solve(ll zeros, ll ones, ll &c)
{
    if(zeros == 0)
    {
        c += (ones*(ones + 1)/2)*fact(ones);
        return c;
    }
    else if(ones == 0)
    {
        return c;
    }

    for(ll i=1;i<ones;i++)
    {
        if()
    }








}



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
        ll n;
        cin >> n;

        vll v;
        ll i,j,k;
        ll ones = 0;
        ll zeros = 0;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
            if(k==0)
            {
                zeros++;
            }
            else
            {
                ones++;
            }
        }
        ll c = 0;
        return solve(zeros,ones,c);
        

    }

    return 0;
}
