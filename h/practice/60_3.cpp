#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define allr(X) (X).rbegin(), (X).rend()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
#define ll long long int
#define ld long double
#define pb push_back
#define mpr make_pair
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
constexpr ld PI = 3.141592653589793238462;
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
  

// for printing a vector;
void print(vll v)
{
    for(auto i:v) cout << i << " ";
    cout << endl;
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
        
        ll i,j,k;
        ll n;
        cin >> n >> k;

        vll v1(2*n + 1,0);

        vll v;
        for(i=0;i<n;i++)
        {
            cin >> j;
            v.pb(j);
            v1[j]++;
        }

        vll v2;
        for(i=1;i<sz(v1);i++)
        {
            if(v1[i] == 0)
                v2.pb(i);
        }
        //print(v2);
        ll ans=0;
        i=0;
        while(i<k)
        {
            ans += v2[i];
            i++;
        }
        //print(v2);
        
        ll ans1=0,ans2=0;
        
        ans1 += (*max_element(all(v2)))*(k-1) - ans + v2[k-1];
        ans2 += (*max_element(all(v)))*k - ans;


        cout << max(ans1,ans2) << endl;










        

    }


	return 0;
}
