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
    ll x = 1;
    while(t--)
    {
        ll n,c;
        cin >> n >> c;

        vll v;
        ll i,j,k;

        ll currmin = INT_MAX;
        ll Index = -1;
        
        // Not possible case;
        ll p = (n*(n+1)/2);

        if(c < n-1 || c > p-1)
        {
            cout << "Case #" << x << ":" << " " << "IMPOSSIBLE" << endl;
        }
        else
        {
            ll x = c - (n-1);
            vector<ll> pos(n+1);
            vll final(n+1);
            i=1;
            int num_rev = -1;
            for(i=0;i<n;i++)
            {
                pos[i] = min(n-1,x+i);
                x -= min(n-1,x+i) - i;
                // cout << x << " ";
                
                for(i=0;i<n;i++) final[i] = 0;
                final[pos[i]] = -1;

                j = i-1;
                while(j>=0)
                {
                    reverse(final.begin() + j, final.begin() + pos[j] + 1);
                }

                for(j=0;j<n;j++)
                {
                    if(final[j] == -1)
                    {
                        num_rev = j;
                    }
                }
                final[num_rev] = i+1;
            }
            for(i=1;i<=n;i++)
            {
                cout << final[i] << " ";
            }

        }


        //cout << "Case #" << x << ":" << " " << cost << endl;
        //x++;
    }
    
    
 
	
	return 0;
}
