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

        sort(all(v));

        ll m = 0;
        ll newmax = 0;
        i=0;
        while(!(equal(v.begin() + 1, v.end(), v.begin())))
        {
            k = v[n-1];
            v.pop_back();
            n--;
            newmax = v[n-1];
            for(i=0;i<n-1;i++)
            {
                ll diff = newmax - v[i];
                v[i] += min(k,diff);
                k -= min(k,diff);
                if(k==0)
                    break;
            }
            m++;
        }
        cout << m << endl;
    
    }
    
    
 
	
	return 0;
}
