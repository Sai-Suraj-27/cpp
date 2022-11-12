#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define ll long long int
#define ld long double
#define pb push_back
#define vll vector<ll>
using namespace std;

ll mod = pow(10,9) + 7;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/


vll facts(1000005,0);

ll ans1 = 1;

void solve()
{
    for(ll i=1;i<=1000005;i++)
    {
        ans1 *= i;
        ans1 %= mod;
        facts[i] = ans1;
    }
}


int main() {
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
  
    ll t;
    cin >> t;
    solve();
    while(t--)
    {
        ll n;
        cin >> n;

        vll v;
        ll i,j,k;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }

        ll ans=0;

        for(i=0;i<n;i++)
        {
            ans += facts[v[i]];
            ans %= mod;
        }
        cout << ans << endl;
        
        
        
    }
    
    
	
	
	
	return 0;
}
