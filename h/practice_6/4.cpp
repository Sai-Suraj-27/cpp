#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define allr(X) (X).rbegin(), (X).rend()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
#define MAX(x) *max_element(all(x))
#define MIN(x) *min_element(all(x))
#define SUM(a) accumulate(all(a),0LL)
#define ll long long int
#define ld long double
#define pb push_back
#define mpr make_pair
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
const long double pi=3.14159265358979323846264338327950288419716939937510582097494459230;

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


string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
    return "0";
 
    vector<int> result(len1 + len2, 0);
 
    int i_n1 = 0;
    int i_n2 = 0;
    
    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
 
        i_n2 = 0;
                     
        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
 
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
 
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
 
            i_n2++;
        }
        if (carry > 0)
            result[i_n1 + i_n2] += carry;
 
        i_n1++;
    }
 
    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
    i--;
 
    if (i == -1)
    return "0";
 
    string s = "";
     
    while (i >= 0)
        s += std::to_string(result[i--]);
 
    return s;
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

// Short o(logn) code for btd
// But this works only if input is in integer range;

/*
int btds(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
*/




// TO REMOVE ALL nS ALSO THEN USE "isalpha" instead of "isaln".
// To apply this -> str.erase(it,str.end());

/*
auto it = std::remove_if(str.begin(), str.end(), [](char const &c) {
        return !std::isaln(c);
    });
*/

// std::rotate(ns.begin(),ns.begin() + n-(k%n), ns.end()); to rotate vector to right k steps.
// if we want an element at "index" 'Z' to become 1st element after rotations we replace n-(k&n) with z;

// vector<vll> v(n, vll(n));


// sort with lambdas
// sort(v.begin(), v.end(), [](int a, int b) { return abs(a)<abs(b); });


// cout << "hex_num = " << stoll(hex_num, nullptr, 16) << "\n";
// cout << "binary_num = " << stoll(binary_num, nullptr, 2) << "\n";
// cout << "dec_num = " << stoll(dec_num, nullptr, 10) << "\n ";


pair<ll,ll> fib(ll n)
{
    // Returns F(n), F(n+1) as a pair
    if (n == 0)
        return {0, 1};

    auto p = fib(n >> 1);
    ll c = p.first * (2 * p.second - p.first);
    ll d = p.first * p.first + p.second * p.second;
    if (n & 1)
        return {d, c + d};
    else
        return {c, d};
}

vector<bool> primes()
{
    // To find all the primes between 0 and M;
    ll M = 100000;
    vector<bool> is_prime(M, true);

    is_prime[0] = false;
    is_prime[1] = false;
    for (ll i = 2; i * i <= M; i++)
    {
        if (is_prime[i])
        {
            for (ll j = i * i; j <= M; j += i)
                is_prime[j] = false;
        }
    }
    return is_prime;

}





ll mod = 1e9 + 7;
ll modu = 998244353;
const int N = 2005;  // Based on max n in calculation of ncr (we can get it from the input range)

vector<long long>fact(N),inv(N),invfact(N);
void pre()
{
    inv[0]=inv[1]=fact[0]=invfact[0]=1;
    
    // Based on what mod we should use (as given in the problem) we can change here.
    ll mod=modu;
    
    for(ll i=2; i<N; i++)
        inv[i]=mod-mod/i*inv[mod%i]%mod;
    for(ll i=1; i<N; i++)
    {
        fact[i]=fact[i-1]*i%mod;
        invfact[i]=invfact[i-1]*inv[i]%mod;
    }
}

long long ncr(long long n,long long r)
{
    if(r>n)
        return 0;
    ll tmp=invfact[n-r]*invfact[r]%modu;
    return (fact[n]*tmp)%modu;
}





// Very large power very large nber modulo...
// This is also => binary Exponentiation with modulo (m)...
// The module operator doesn't interfere with multiplications
// a*b = ((a%m) * (b%m))%m;
// x^n % m
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


ll lcm(ll a, ll b)
{
    return (a /__gcd(a, b)) * b;
}


ll mod_of_large_num(string num, ll a)
{
    ll res = 0;
    for (ll i = 0; i < num.length(); i++)
        res = (res * 10 + (int)num[i] - '0') % a;
 
    return res;
}

bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    return (a.first*b.second) > (a.second*b.first);
}


ll moduloMultiplication(ll a, ll b, ll mod)
{
    ll ans = 0; 
    a %= mod;

    while (b)
    {
        if (b & 1)
            ans = (ans + a) % mod;
        a = (2 * a) % mod;
        b >>= 1;
    } 
    
    return ans;
}












int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll t;
    cin >> t;
    
    // here...
    // we might have to precompute using pre(); 

    while(t--)
    {
        
        ll i,j,k;
        ll n;
        cin >> n;
        vll v;
        unordered_map<ll,ll> mp;
        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
            mp[k]=0;
        }
        vll v1;
        for(i=0;i<n;i++)
        {
            if(mp[v[i]] > 0)
            {
                mp[-v[i]]++;
            }
            else
            {
                mp[v[i]]++;
            }
        }

        for(auto i:mp)
        {
            v1.pb(i.first);
        }

        cout << sz(v1) << "\n";



        










        

    }


	return 0;
}
