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

long long hash_s(string s)
{
    const int p = 31;
    const int m = pow(10,9)+9;
    ll n = sz(s);
    ll i=0;
    ll h = 0;
    for(i=0;i<n;i++)
    {
        ll k = (s[i] - 'a' + 1) * pow(p,i);
        cout << k << " ";
        k = k%m;
        
        h += k;
    }
    return h;
}

int main()
{

    ll i,j,k;
    ll n;
    cin >> n;

    /* we will create fn call hash fn(string s) which will map a string to an
    integer and we should note that for any 2 strings s & t if s & t are equal
    then definitely hash(s) == hash(t) but it's converse need not be true,
    as for a 2 different strings also hash can be same but we may not worry as
    this will be a very case...

    So usually we want the hash function to map strings onto numbers of a fixed
    range [0,m), then comparing strings is just a comparison of two integers
    with a fixed length. And of course, we want hash(s) != hash(t)
    to be very likely if s != t.


hash(s) = ((s[0])p^0 + (s[1])p^1 + (s[2])p^2 + (s[3])p^3 .....+ (s[n-1])p^(n-1)) % m

p = prime number roughly equal to the number of characters in the input alphabet.
p = 31 in case of only lowercase english letters
p = 53 in case if we consider both lower and uppercase letters.

The probability of two random strings colliding is about ~ 1/m; 
good choice for "m" is some large prime number. 
m = 10^9 + 9;

-> we use the convention a = 1, b = 2, c = 3,.....z = 26












*/

k = hash_s("aaa");
cout << k << endl;

k = hash_s("ab");
cout << k << endl;

k = hash_s("abc");
cout << k << endl;



   return 0;
}
