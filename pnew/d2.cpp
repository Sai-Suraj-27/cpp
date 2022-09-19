#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;



int main()
{
    // state: dp[i] = min no.of coins to make a sum = x;
    // Transition (equation):
    // dp[n] = min(dp[n-v[i]]) + 1; 

    ll i,j,k;

    ll n,x;
    cin >> n >> x;

    vll v;
    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }

    vll dp(x);
    dp[0] = 0;
    ll mini = INT_MAX;

    

    for(i=1;i<=x;i++)
    {
        mini = INT_MAX;
        
        for(j=0;j<n;j++)
        {
            if(v[j] <= i)
            {
                k = 1 + dp[i-v[j]];
                mini = min(mini,k);
            }
        }
        dp[i] = mini;
    }

    if(dp[x] != INT_MAX)
    {
        cout << dp[x] << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    






    return 0;
}