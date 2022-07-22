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
        ll a,b,n;
        cin >> a >> b >> n;

        // min(x) such that x >= n and x%a ==0, x%b != 0 
        int init_diff = n%a;
        if(init_diff != 0)
            n = n - init_diff + a;
        
        if(a%b == 0)
        {
            cout << -1 << endl;
        }
        else if(n%b != 0)
        {
            cout << n << endl;
        }
        else
        {
            // (n + k(a))%b != 0 find min such k>=0
            // -> n%b !=0 or ka % b != 0;
            cout << n+a << endl;  
        }
    }

    return 0;
}
