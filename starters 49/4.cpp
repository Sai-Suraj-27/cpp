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
        ll n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        // all subsequences should have f(a) as min as possible.

        ll i,j;
        ll maxdiff = -1;
        ll c0=0,c1=0;
        for(i=0;i<n;i++)
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
        // cout << c0 << c1 << endl;
        ll smaller = min(c0,c1);
        ll diff = abs(c0-c1);
        // now all k subsequences have 0 diff

        ll rem = n-(2*smaller);
        ll ourmax = 0;
        n = rem;
        if(n % k == 0)
            ourmax += n/k;
        else
            ourmax += (((n-(n % k))/k) + 1);
        
       
        cout << ourmax << endl;
        
    }
    
    
 
	
	return 0;
}
