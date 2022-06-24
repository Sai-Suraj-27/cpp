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

int main()
{

    string s;
    cin >> s;
    string s2;
    cin >> s2;
    string s1 = "";

    // Here instead of s.find(s2); we can use s.starts_with("string s2...") can be used and !starts_with(...some other string) can be used to delete some specific substrings.

    ll pos;
    while (s.find(s2) != -1) // we are finding the start position of the substring.
    {
        pos = s.find(s2);
        s.erase(pos, sz(s2)); // erasing the string from that position to where the substring ends using the length of substring.
    }
    cout << s << " "; // all the substrings s2 present in s will be not there.
    return 0;
}
