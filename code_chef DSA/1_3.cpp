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
        ll a,b,c;
        cin >> a >> b >> c;

        if(a == b+c or b == a+c or c == a+b)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;







    }










    return 0;
}