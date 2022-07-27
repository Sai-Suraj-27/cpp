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


int main()
{
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
        ll i,j,k;

        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        vll v1;
        ll c = 0;
        k=0;
        sort(all(v));
        while(i<n)
        {
            k = upper_bound(all(v),v[i]) - lower_bound(all(v),v[i]);
            v1.pb(k);
            i+=k;
        }
        sort(all(v1));
        c = v1[sz(v1)-1];
        if(sz(v1) >=2)
        {
            k = v1[sz(v1)-2];
        }
        else
        {
            k=0;
        }
        if(c%2 == 1)
        {
            cout << max(c/2 + 1,k) << endl;
        }
        else
        {
            cout << max(c/2,k) << endl;
        }
        
        
    }
    
    
 
	
	return 0;
}
