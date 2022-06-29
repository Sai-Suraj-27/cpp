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


int main() {
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
            ll x;
            cin >> x;
            v.pb(x);
        }
        vector<string> vs;
        if(v[0] == 1 && v[1] == 0)
        {
            vs.pb("odd");
            vs.pb("eve");
        }
        else if(v[0] == 0 && v[1] == 1)
        {
            vs.pb("odd");
            vs.pb("odd");
        }
        else if(v[0] == 0 && v[1] == 0)
        {
            vs.pb("odd");
            vs.pb("odd");
        }
        else if(v[0] == 1 && v[1] == 1)
        {
            vs.pb("odd");
            vs.pb("eve");
        }
        for(i=1;i<n-1;i++)
        {
            ll t = sz(vs);
            if(v[i] == 1)
            {
                if(vs[t-1] == "eve")
                {
                    vs.pb("odd");
                }
                else
                {
                    vs.pb("eve");
                }
            }
            else
            {
                if(vs[t-1] == "eve")
                {
                    vs.pb("eve");
                }
                else
                {
                    vs.pb("odd");
                }
            }
        }
        if(n==2)
        {
            if(v[0] == v[1])
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl;
            }
        }
        else if(v[n-1] == 1)
            {
                if(vs[n-1] != vs[0])
                {
                    cout << "yes" << endl;
                }
                else
                {
                    cout << "no" << endl; 
                }
            }
        else if(v[n-1] == 0)
        {
            if(vs[n-1] == vs[0])
            {
                cout << "yes" << endl;
            }
            else
            {
                cout << "no" << endl; 
            }
        }
    }
	
	
	
	return 0;
}
