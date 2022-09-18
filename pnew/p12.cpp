#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
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

ll n_uniq(vector<ll> v)
{
    sort(all(v));
    return distance(v.begin(),unique(v.begin(), v.end()));
}

// xor of a nber x with a nber with all 1's gives the nber with every bit of x flipped.
ll bit_all_1 = 4294967295;


// Very large power very large nber modulo...
ll long_power_long(ll x, ll n)
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

ll btd(string n)
{
    ll dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    ll base = 1;
 
    ll len = n.length();
    for (ll i = len - 1; i >= 0; i--) {
        if (n[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
}







int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll i,j,k;
    ll n,x;
    cin >> n >> x;

    vll v;
    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }
    sort(all(v));

    ll c = 0;
    ll sum = 0;
    i=0;

    for(auto i: v) cout << i << " ";
    cout << endl;
    
    ll c1=0;
    while(i<n)
    {
        while(sum+v[i] <= x and i<n and c1<=1)
        {
            sum += v[i];
            i++;
            c1++;
        }
        c++;
        sum = 0;
        c1=0;
    }
    cout << c << endl;
    

	return 0;
}
