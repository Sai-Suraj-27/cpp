#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define ps(x,y)  fixed<<setprecision(y)<<x
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
ll mod = 1e9 + 7;
using namespace std;



int main()
{
    ll n,m,l,s,t;
    cin >> n >> m >> l >> s >> t;
    ll u,p,w;
    vector<vector<ll>> v(m, vll(3));
    ll i;
    for(i=0;i<m;i++)
    {
        cin >> u >> p >> w;
        v[i][0] =u;
        v[i][1] =p;
        v[i][2] =w;        
    }
    ll c =0;
    for(i=0;i<m;i++)
    {
        if((v[i][0] == s and v[i][1] == t) or (v[i][0] == t and v[i][1] == s))
        {
            //cout << "l" << " ";
            if(v[i][2] == l or v[i][2] == 0)
            {
                cout << "YES" << endl;
                c++;
            }
            else
            {
                cout << "NO" << endl;
                c++;
            }
        }
    }
    if(c!=1)
    {
        cout << "YES" << endl;
    }





    return 0;
}