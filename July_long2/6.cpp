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
            cin >> k;
            v.pb(k);
        }

        vll v1;
        vll v2;
        k = v[0];
        v1.pb(k);
        for(i=1;i<n;i++)
        {
            if(v[i] >= k)
            {
                k = v[i];
                v1.pb(k);
            }
            else
            {
                v2.pb(v[i]);
            }
        }
        int c = 0;
        if(is_sorted(all(v)) || sz(v2) == 0)
        {
            cout << "YES" << endl;
            c++;
        }
        else if(!is_sorted(all(v2)))
        {
            cout << "NO" << endl;
            c++;
        }
        else if(v1[v1.size()-1] <= v2[0])
        {
            cout << "YES" << endl;
            c++;
        }
        else if(v2[v2.size()-1] <= v1[0])
        {
            cout << "YES" << endl;
            c++;
        }
        else
        {
            for(i=0;i<sz(v1)-1;i++)
            {
                if(v2[0] >= v1[i] && v2[v2.size()-1] <= v1[i + 1])
                {
                    cout << "YES" << endl;
                    c++;
                    break;
                }
            }
        }
        if(c==0)
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}