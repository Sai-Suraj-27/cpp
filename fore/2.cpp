#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;
ll mod = 1000000007;



int main()
{

    ll t;
    cin >> t;

    while(t--)
    {
        ll n;
        cin >> n;

        vll v;
        vll v1;
        ll i,j,k;

        for(i=0;i<n;i++)
        {
            cin >> k;
            v.pb(k);
        }
        for(i=0;i<n;i++)
        {
            cin >> k;
            v1.pb(k);
        }

        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        
        ll c1 = 0;
        
        for(i=0;i<n;i++)
        {
            if(v[i] == 1)
                c1+=1;
        }

        priority_queue<ll,vector<ll>, greater<ll>> pq;

        for(i=0;i<n;i++)
        {
            pq.push(v1[i]);
        }
        i=0;
        j=0;
        while(v[i]==1 and !pq.empty())
        {
            if(pq.top() != 1)
            {
                v[i] = v[i] + pq.top();
                i++;
            }
            pq.pop();
        }

        for(i=0;i<n;i++)
        {
            if(v1[i] != 1 and c1 > 0)
            {
                v1[i] = 0;
                c1--;
            }
        }

        sort(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if(v[i] == 1 or v1[i]==1)
            {
                v[i] = v[i] + v1[i];
            }
            else if(v1[i] != 0)
            {
                v[i] = max(v[i] + v1[i], v[i]*v1[i]);
            }
        }
        ll ans = 1;
        for(i=0;i<n;i++)
        {
            ans *= v[i];
            ans = ans%mod;
        }

        cout << ans << endl;

    }

    

    return 0;
}