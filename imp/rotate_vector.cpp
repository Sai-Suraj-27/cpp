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

void rotate(vll &v, ll k)
{
    ll n = sz(v);
    k = k % n;
    reverse(all(v));
    reverse(v.begin(), v.begin() + k);
    reverse(v.begin() + k, v.end());
}

int main()
{
    vll v;
    ll i, k;
    ll n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> k;
        v.pb(k);
    }
    cin >> k;
    rotate(v, k);
    for (i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}