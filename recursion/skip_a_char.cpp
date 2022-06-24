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

string rcn(string s, char ch)
{
    if (sz(s) == 0)
    {
        return "";
    }
    if (s[0] != ch)
    {
        return (s[0] + rcn(s.substr(1), ch));
    }
    else
    {
        return (rcn(s.substr(1), ch));
    }
}

int main()
{
    string s;
    cin >> s;

    char ch;
    cin >> ch;

    cout << rcn(s, ch) << endl;

    return 0;
}
