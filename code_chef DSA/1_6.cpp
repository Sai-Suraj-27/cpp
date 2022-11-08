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
        double p,x,y,z;
        cin >> p >> x >> y >> z;

        if(z==1)
        {
            p += y*p/100.0;
        }
        else
            p -= x*p/100.0;

        cout << fixed << setprecision(8) << p << endl;






    }








    return 0;
}