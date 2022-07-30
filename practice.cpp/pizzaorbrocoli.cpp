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


ll pt(string s)
{
    int c = 0;
    whlie(true)
    {
        if(i==n)
        {
            break;
        }
        else if(s[i] == '1')
        {
            c++;
        }
        else
        {
            maxc = max(c,maxc);
            c=0;
        }
        i++;
    }
    return maxc;
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
        ll n,k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll i,j;

        
        
        
        
        
        
    }
    
    
 
	
	return 0;
}
