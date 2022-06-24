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
        ll x1,y1,x2,y2;
        cin >> x1 >> y1;
        cin >> x2 >> y2;

        ll x_diff = abs(x1-x2);
        ll y_diff = abs(y1-y2);

        if(x_diff == 0 && (y_diff == 2 || y_diff == 4))
        {
            cout << "yes" << endl;
        }
        else if(x_diff == 1 && (y_diff == 1 || y_diff == 3))
        {
            cout << "yes" << endl;
        }
        else if(x_diff == 2 && (y_diff == 0 || y_diff == 4))
        {
            cout << "yes" << endl;
        }
        else if(x_diff == 3 && (y_diff == 1 || y_diff == 3))
        {
            cout << "yes" << endl;
        }
        else if(x_diff == 4 && (y_diff == 0 || y_diff == 2))
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }








        
        
        
        
        
    }
    
    
	
	
	
	return 0;
}
