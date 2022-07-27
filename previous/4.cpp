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

        vll v,v1;
        ll i,j,k;

        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        ll c = 1;
        k=0;
        ll count = 0;
        ll spe = 0;
        sort(all(v));
        for(i=0;i<n;i++)
        {
            c = upper_bound(all(v),v[i]) - lower_bound(all(v),v[i]);
            if(c==1)
            {
                count++;
            }
            if(c==1 && i==n-1)
            {
                k++;
            }
            if(c>=3)
            {
                spe++;
            }
        }
        if(count == 1 && k==1)
        {
            if(spe>0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
        else if(count%2==0)
        {
            cout << count/2 << endl;
        }
        else
        {
            cout << count/2 + 1 << endl;
        }
    }
    
	return 0;
}
