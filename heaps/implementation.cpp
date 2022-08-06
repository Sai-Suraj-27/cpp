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

ll num_uniq(vector<ll> v)
{
    sort(all(v));
    return distance(v.begin(),unique(v.begin(), v.end()));
}


// Very large power very large number modulo...
ll powerLL(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % mod;
        n = n / 2;
        x = x * x % mod;
    }
    return result;
}


class heap
{
    public:

        vll v;
        void insert(ll val)
        {
            v.pb(val);
            while()

        }

        void deletein_heap(ll val)
        {


        }

        void print_min()
        {

        }



};








int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll t;
    cin >> t;
    heap h;
    while(t--)
    {
        ll type,val;
        cin >> type;

        if(type == 1)
        {
            cin >> val;
            h.insert(val);


        }
        else if(type == 2)
        {
            cin >> val;
            h.deletein_heap(val);
        }
        else
        {
            h.print_min();
        }
        
    }
    
    
 
	
	return 0;
}
