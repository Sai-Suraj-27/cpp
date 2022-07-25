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

    // finding some segment of the array that is largest and its sum <= k;
    // all the elements in the array >=0;

    ll n, s;
    cin >> n >> s;

    vll v;
    ll i,j,k;
    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }
    

    // sum <= s; && r-l is max;

    ll l=0,r=1;
    ll maxseg = 0;
    ll currsum = v[0];
    while(l<=r && r<n && l<n)
    {
        currsum += v[r];
        if(currsum>s)
        {
            currsum -= v[l];
            l++;
            r++;
        }
        else
        {
            maxseg = max(maxseg, r-l+1);
            r++;
        }
    }
    cout << maxseg << endl;







    return 0;
}
