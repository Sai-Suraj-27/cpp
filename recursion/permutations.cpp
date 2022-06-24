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

void permutations(string s, string s1)
{
    if (s == "")
    {
        cout << s1 << endl;
        return;
    }
    ll i;
    
    for (i = 0; i <= sz(s1); i++)
    {
        char ch = s[i];
        string f = s1.substr(0, i);
        string s2 = s1.substr(i+1);
        permutations(s.substr(1), f + ch + s2);
    }
}

int main()
{

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        string s1 = "";

        permutations(s, s1);
    }

    return 0;
}
