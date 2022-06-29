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
        ll i,j,k;
        ll odd = 0;
        ll eve = 0;
        vll v1;
        for(i=0;i<2*n;i++)
        {
            ll x;
            cin >> x;
            v.pb(x);
            if(x%2 == 0)
            {
                eve++;
                v1.pb(x);
            }
            else
            {
                odd++;
            }
        }

        ll c = 0;
        vll v2;
        if(odd >= eve)
        {
            cout << (odd-eve)/2 << endl;
        }
        else if(odd < eve)
        {
            k = (eve - odd)/2;
            for(i=0;i<sz(v1);i++)
            {
                v2.pb(__builtin_ctzll(v1[i]));
            }
            sort(all(v2));
            i=0;
            while(k--)
            {
                c+= v2[i];
                i++;
            }
            cout << c << endl;
        }
        
    }	
	
	return 0;
}
