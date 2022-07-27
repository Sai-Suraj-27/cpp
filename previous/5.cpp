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

        string s;
        cin >> s;
        bool flag = true;
        if(n==1)
        {
            cout << "yes" << endl;
        }
        else
        {
            string s1 = "";
            ll i=0,j=0;
            s1 += s[0];
            flag = false;
            while(sz(s) > 0)
            {
                if(sz(s) %2 == 1)
                {
                    s = s.substr(0,sz(s)-1);
                }
                else if(sz(s)%2 == 0 && s.substr(0,sz(s)/2) == s.substr(sz(s)/2,sz(s)/2))
                {
                    s = s.substr(0,sz(s)/2);
                }
                else
                {
                    break;
                }
            }
            if(s=="")
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
