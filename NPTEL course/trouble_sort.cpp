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
    ll x = 1;
    while(t--)
    {
        ll n;
        cin >> n;
        vll v;
        vll odd;
        vll eve;
        ll i,j,k;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
            if(i%2==1)
            {
                odd.pb(k);
            }
            else
            {
                eve.pb(k);
            }
        }
        // 3 numbers at a time...
        
        sort(all(odd));
        sort(all(eve));
        v.erase(all(v));
        ll p=0,q=0;
        for(i=0;i<n;i++)
        {
            if(i%2==1 && p<sz(odd))
            {
                v.pb(odd[p]);
                p++;
            }
            else if(i%2==0 && q<sz(eve))
            {
                v.pb(eve[q]);
                q++;
            }
        }

        if(is_sorted(all(v)))
        {
            cout << "Case #" << x << ":" << " " << "OK" << endl;
        }
        else
        {
            for(i=0;i<n-1;i++)
            {
                if(v[i] > v[i+1])
                {
                    cout << "Case #" << x << ":" << " " << i << endl;
                    break;
                }
            }

        }    
        
        x++;
    }

	return 0;
}
