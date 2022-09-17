#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;












int main()
{
    ll n;
    cin>> n;

    vll dp(n+1);

    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    ll i,j=1,k;
    
    for(i=3;i<=n;i++)
    {
        j=1;
        while(j<=i and j<=6)
        {
            dp[i] += dp[i-j];
            j++;
        }
    }
    cout << dp[n] << endl;


    return 0;
}