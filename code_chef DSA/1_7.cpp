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
        double n;
        cin >> n;
        ll k=6;
        ll i=0;
        ll sum=0;
        while(k--)
        {
            cin >> i;
            sum += i;
        }
        ll p = ceil(n/2.0);
        cout << sum*p << endl;








    }











    return 0;
}