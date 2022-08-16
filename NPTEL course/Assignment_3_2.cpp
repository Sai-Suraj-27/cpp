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

ll num_uniq(vector<ll> v)
{
    sort(all(v));
    return distance(v.begin(),unique(v.begin(), v.end()));
}

// xor of a number x with a number with all 1's gives the number with every bit of x flipped.
ll bit_all_1 = 4294967295;


// Very large power very large number modulo...
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



// TO REMOVE ALL NUMS ALSO THEN USE "isalpha" instead of "isalnum".
// To apply this -> str.erase(it,str.end());

/*
auto it = std::remove_if(str.begin(), str.end(), [](char const &c) {
        return !std::isalnum(c);
    });
*/

// std::rotate(nums.begin(),nums.begin() + n-(k%n), nums.end()); to rotate vector to right k steps.
// if we want an element at index 'Z' to become 1st element after rotations we replace n-(k&n) with z;






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

        ll m;
        cin >> m;

        vll v1;
        for(i=0;i<m;i++)
        {
            cin >> k;
            v1.pb(k);
        }
        ll c = 0;
        
        // ll prev = v[0];
        // c = 0;
        // cout << "hehe";

        if(*max_element(all(v)) != *max_element(all(v1)))
        {
            if(*max_element(all(v)) > *max_element(all(v1)))
            {
                cout << "Ankita" << endl;
                cout << "Ankita" << endl;
            }
            else
            {
                cout << "Biswas" << endl;
                cout << "Biswas" << endl;
            }
        }
        else
        {
            cout << "Ankita" << endl;
            cout << "Biswas" << endl;
        }
        
        
        
        
        
        /*
        while(true)
        {
            if(upper_bound(all(v1),prev) != v1.end() && c%2==0)
            {
                prev = *upper_bound(all(v1), prev);
                c++;
            }
            else if(c%2==1 && upper_bound(all(v),prev) != v.end())
            {
                prev = *upper_bound(all(v),prev);
                c++;
            }
            else
            {
                break;
            }
        }
        if(c%2==1)
        {
            cout << "Biswas" << endl;
        }
        else
        {
            cout << "Ankita" << endl;
        }

        prev = v1[0];
        c = 0;

        while(true)
        {
            if(upper_bound(all(v),prev) != v.end() && c%2==0)
            {
                prev = *upper_bound(all(v), prev);
                c++;
            }
            else if(c%2==1 && upper_bound(all(v1),prev) != v1.end())
            {
                prev = *upper_bound(all(v1),prev);
                c++;
            }
            else
            {
                break;
            }
        }
        if(c%2==1)
        {
            cout << "Ankita" << endl;
        }
        else
        {
            cout << "Biswas" << endl;
        }
        */
    }

	return 0;
}
