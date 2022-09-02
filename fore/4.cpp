#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;
ll mod = pow(10,9) + 7;




int main()
{
    ll t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        ll i,j,k;
        ll n = s.size();

        i=0,j=0;
        vll cnt(26);
        ll ans = 0;
        while(i<n)
        {
            if(j<n and cnt[s[j] - 'a'] == 0)
            {
                cnt[s[j] - 'a']++;
                ans += j-i+1;
                j++;
            }

            else
            {
                cnt[s[i] - 'a']--;
                i++;
            }
        }
        cout << ans%mod << endl;

    }












    return 0;
}