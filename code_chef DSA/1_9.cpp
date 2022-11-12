#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;



ll powermod(ll n, ll x)
{
    while(x--)
    {
        n *= n;
        n %= 10;
    }
    return n;
}



int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m;
        cin >> n >> m;

        string s = "";
        string s1 = to_string(n);
        ll i,j,k;
        for(i=0;i<s1.size();i++)
        {
            k = (int) s1[i];
            s += to_string(powermod(k,m));
        }
        reverse(s.begin(),s.end());

        k = stoi(s);
        cout << k << endl;
        if(k%7 == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
 









    }














    return 0;
}