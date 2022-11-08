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
        ll h,w,x,y,k;
        cin >> h >> w >> x >> y >> k;

        ll d = pow(h-y,2) + pow(w-x,2);
        cout << d << endl;
        
        if(d<pow(k,2))
            cout << 1 << endl;
        else
            cout << 0 << endl; 





    }









    return 0;
}