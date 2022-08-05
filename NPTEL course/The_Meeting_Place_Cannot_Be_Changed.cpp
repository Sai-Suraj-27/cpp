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

template<typename T>
bool allEqual(std::vector<T> const &v) {
    if (v.size() == 0) {
        return false;
    }
    return std::equal(v.begin() + 1, v.end(), v.begin());
}

ll no_uniq(vector<ll> v)
{
    sort(all(v));
    return distance(v.begin(),unique(v.begin(), v.end()));
}




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

        vll x;
        vll v;

        ll i,j,k;
        ll minx = INT_MAX:
        ll v_minx = 0, v_maxx = 0; 
        ll maxx = INT_MIN;
        for(i=0;i<n;i++)
        {
            cin >> k;
            x.pb(k);
        }
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }

        for(i=0;i<n;i++)
        {
            if(x[i] > maxx)
            {
                maxx = x[i];
                v_maxx = v[i];
            }
            if(x[i] < minx)
            {
                minx = x[i];
                v_minx = v[i];
            }
            ll dist = maxx - minx;
            if(v_minx != v_maxx)
            {
                l
            }




        }



        
        
        
        
        
        
    }
    
    
 
	
	return 0;
}
