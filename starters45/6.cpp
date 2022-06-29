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
        ll n,a,b;
        cin >> n >> a >> b;

        string sa = to_string(a);
        string sb = to_string(b);
        string x = "";
        for(i=0;i<n;i++)
        {
            if(sa[i] == '1' && sb[i] == '1')
            {
                x = "0" + x;
            }
            else if(sa[i] == '0' && sb[i] == '0')
            {
                x = "1" + x;
            }
            else if(sa[i] == '0' && sb[i] == '1')
            {
                x = "0" + x;
            }
            else if(sa[i] == '1' && sb[i] == '0')
            {
                x = "1" + x;
            }
        }
        ll fx = 0;
        ll j = 0;
        for(i=sz(x)-1;i>=0;i--)
        {
            fx += (pow(2,j)*x[i]);
            j++;
        }
        cout << fx << endl;
        
        
        
    }
    
    
	
	
	
	return 0;
}
