#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;










int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll c=0;
        while(n%2==0)
        {
            c++;
            n /= 2;
        }
        if(c%2==0)
        {
            cout << 1 << "\n";
        }
        else
            cout << 0 << "\n";



    }













    return 0;
}