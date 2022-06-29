#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
ll mod = 1e9 + 7;
using namespace std;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/


int main() {
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
  
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;

        vll v;
        ll i,j;
        ll total = 0;
        for(i=0;i<n;i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
            total += x;
        }
        vll v1;

        ll k = total/(n+1);

        for(i=0;i<n;i++)
        {
            cout << (v[i] - k) << " "; 
        }
        cout << endl;
        
    }
    
    
	
	
	
	return 0;
}
