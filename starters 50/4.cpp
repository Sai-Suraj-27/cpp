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

bool isok(vll v)
{
    for(ll i=0;i<sz(v);i++)
    {
        if(v[i] > 0)
        {
            return false;
        }
    }
    return true;
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
        ll n,x,y;
        cin >> n >> x >> y;

        ll i,j,k;
        vll v;
        ll maxi = INT_MIN;
        ll pos = -1;

        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
            if(k>maxi)
            {
                maxi = k;
                pos = i;
            }
        }
        ll c = 0;
        ll c2 = 0;
        if(y>=x)
        {
            c += maxi/y;
            if(maxi % y != 0)
            {
                c += 1;
            }
            cout << c << endl;
        }
        else
        {
            maxi = *max_element(all(v));
            pos = max_element(all(v)) - v.begin();
            // cout << pos << endl;
            if(y >= maxi)
            {
                c++;
            }
            else if(pos == n-1)
            {
                // cout << pos << " ";
                c += maxi/x;
                // cout << c << " ";
                if(maxi % x != 0)
                {
                    c += 1;
                }
            }
            else
            {
                ll maxi1 = INT_MIN;
                ll maxi2 = INT_MIN;
                for(i=0;i<pos;i++)
                {
                    maxi1 = max(v[i],maxi1);
                }
                for(i=pos+1;i<n;i++)
                {
                    maxi2 = max(v[i],maxi2);
                }
                if(maxi2 > maxi1)
                {
                    c += maxi/y;
                    if(maxi % y != 0)
                    {
                        c += 1;
                    }
                }
                else
                {
                    c += maxi1/x;
                    if(maxi1 % x != 0)
                    {
                        c += 1;
                    }
                    maxi = *max_element(all(v));
                    c += maxi/y;
                    if(maxi % y != 0)
                    {
                        c += 1;
                    }
                }
            }
            
        }
        cout << c << endl;
        
    }
	
	return 0;
}
