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
  




pair<int,int> maxLen(vll v, int n)
{
    unordered_map<int, int> hM;
 
    int sum = 0;
    int max_len = 0;
    int ending_index = -1;
 
    for (int i = 0; i < n; i++)
        v[i] = (v[i] == 0) ? -1 : 1;
 
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        
        if (sum == 0)
        {
            max_len = i + 1;
            ending_index = i;
        }
 
        if (hM.find(sum) != hM.end())
        {
            if (max_len < i - hM[sum])
            {
                max_len = i - hM[sum];
                ending_index = i;
            }
        }
        else
            hM[sum] = i;
    }
 
    for (int i = 0; i < n; i++)
    {
        v[i] = (v[i] == -1) ? 0 : 1;
    }

    return {ending_index - max_len + 1, ending_index};
 
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
        cin >> n;

        string s;
        cin >> s;

        
        
        
        vector<vector<ll>> v2;
        ll c = 0;
        while(true)
        {
            if(sz(s) == 1)
            {
                break;
            }

            vll v;
            for(i=0;i<n;i++)
            {
                if(s[i] == '0')
                {
                    v.pb(0);
                }
                else
                {
                    v.pb(1);
                }
            }

            c++;
            pair<int,int> pr = maxLen(v,n);
            vll v3;
            ll c0 =0;
            ll c1 = 0;
            
            v3.pb(pr.first);
            v3.pb(pr.second);


            for(i=0;i<n;i++)
            {
                if((i<pr.first) or (i>pr.second))
                {
                    if(s[i] == '0')
                    {
                        c0++;
                    }
                    else
                    {
                        c1++;
                    }
                }
            }
            if(c0<=c1)
                s.replace(s.begin()+pr.first,s.begin()+pr.second,"0");
            else
                s.replace(s.begin()+pr.first,s.begin()+pr.second,"1");
            
            if(c0<=c1)
            {
                v3.pb(0);
            }
            else
            {
                v3.pb(1);
            }
            v2.pb(v3);
        }

        cout << 1 << " " << c << endl;

        for(i=0;i<sz(v2);i++)
        {
            cout << v2[i][0] + 1 << " " << v2[i][1] << " " << v2[i][2] << endl;
        }

    }


	return 0;
}
