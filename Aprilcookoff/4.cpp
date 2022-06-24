#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i, a, n) for (ll i = a; i < n; i++)
#define B(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
using namespace std;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/

ll sum = 0;
ll digitsum(ll n)
{
    if (n == 0)
    {
        return sum;
    }
    sum += n % 10;
    n /= 10;
    digitsum(n);
}

int main()
{
    // your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n,x;
        cin >> n >> x;
        
        if(n%2==1 && x%2 == 0)
        {
            cout << "no" << endl;
        }
        else if(n%2 == 1 && x%2 == 1)
        {
            cout << "yes" << endl;
        }
        else if(n%2==0 && x%2 == 0)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "yes" << endl;
        }






    }

    return 0;
}
