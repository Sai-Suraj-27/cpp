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

        string s;
        cin >> s;
        ll i,j,k=0;
        unordered_map<char,ll> mp;
        for(i=0;i<n;i++)
        {
            mp[s[i]]++;
        }

        for(auto j:mp)
        {
            if(j.second%2 != 0)
            {
                cout << "NO" << endl;
                k++;
                break;
            } 
        }
        if(!k and n%2 !=0)
        {
            cout << "NO" << endl;
        } 
        else if(!k)
        {
            cout << "YES" << endl;
        }
        
        
        
        
        
    }
    
    
	
	
	
	return 0;
}
