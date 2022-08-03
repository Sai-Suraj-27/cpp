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
        ll x,y;
        cin >> x >> y;
        ll f1,f2;
        for(ll i=pow(y,0.5);i>=1;i--)
        {
            if(y%i==0)
            {
                f1 = i;
                f2 = y/i;
                break;
            }
        }

        ll m1 = x/2;
        ll m2 = x - x/2;
        
        if(f1 > m2 or f2 < m1)
        {
            cout << f1 << " " << f2 << endl;
            cout << m1 << " " << m2 << endl;
        }
        else
            cout << -1 << endl;
    }

	return 0;
}
