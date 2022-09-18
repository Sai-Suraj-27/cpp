#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;




ll solve(vll &dp, ll n, ll x, vll v)
{
    ll mini = LONG_MAX;
    for(ll i=0;i<n;i++)
    {
        ll k = solve(dp,n,x-v[i],v);
        mini = min(mini,k);
    }
    dp[x] += mini + 1;
    
    return dp[x];
}


int main()
{
    // state: dp[i] = min no.of coins to make a sum = x;
    // Transition (equation):
    // dp[n] = min(dp[n-v[i]]) + 1; 

    ll n,x;
    cin >> n >> x;

    ll i,j,k;
    vll v;

    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }

    vll dp(x+1);

    for(i=0;i<n;i++)
    {
        dp[v[i]] = 1;
    }








    return 0;
}