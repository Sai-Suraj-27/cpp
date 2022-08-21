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


ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
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

/*
void pairsort(vll &a, vll &b, ll n)
{
    vector<pair<ll,ll>> v(n);

    for(int i=0;i<n;i++)
    {
        v[s] = i] = {a[i],b[i]};
    }
    sort(all(v));

    for(int i=0;i<n;i++)
    {
        a[i] = v[s] = i].first;
        b[i] = v[s] = i].second;
    }

}
*/


void merge(vll &v, ll s, ll e)
{
    ll i;
    ll mid = s + (e-s)/2;

    ll l1 = mid - s + 1;
    ll l2 = e - mid;

    vll v1,v2;
    for(i=s;i<=mid;i++)
    {
        v1.pb(v[i]);
    }
    cout << v[i] << " ";
    for(i=mid+1;i<e;i++)
    {
        v2.pb(v[i]);
    }

    // making a final sorted array from these 2 v1,v2 sorted arrays.

    for(auto i: v1) cout << i << " ";
    cout << "\n";

    for(auto i: v2) cout << i << " ";
    cout << "\n";


    i=0;
    ll j=0;
    while(i<sz(v1) or j<sz(v2))
    {
        if(i==sz(v1))
        {
            v[s] = (v2[j]);
            j++;
            s++;
        }
        else if(j==sz(v2))
        {
            v[s] = (v1[i]);
            i++;
            s++;
        }
        else if(v1[i] <= v2[j])
        {
            v[s] = (v1[i]);
            i++;
            s++;
        }
        else if(v2[j] < v1[i])
        {
            v[s] = (v2[j]);
            j++;
            s++;
        }
    }
    return;
}

void mergesort(vll &v, ll s, ll e)
{
    if(s>=e)
    {
        return;
    }

    ll mid = (s + e)/2;

    mergesort(v,s,mid);
    mergesort(v,mid+1,e);

    merge(v,s,e);

    // for(auto i: v) cout << i << " ";
    // cout << "\n";

}




int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    
    ll n;
    cin >> n;
    vll v(n);
    ll i,j,k;
    
    for(i=0;i<n;i++)
    {
        cin >> k;
        v[i] = k;
    }

    mergesort(v,0,n-1);

    for(auto i: v) cout << i << " ";




    return 0;
}










