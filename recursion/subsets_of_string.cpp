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

vector<string> rcn(string s, string s1)
{
    if (s == "")
    {
        vector<string> v1;
        v1.pb(s1);
        return v1;
    }
    char ch = s[0];
    vector<string> left = rcn(s.substr(1), s1);
    vector<string> right = rcn(s.substr(1), s1 + ch);
    left.insert(left.end(), all(right));
    return left;
}

int main()
{
    // your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    string s1 = "";
    vector<string> v1;
    v1 = rcn(s, s1);

    ll i, n, k;
    for (i = 0; i < sz(v1); i++)
    {
        cout << v1[i] << endl;
    }

    return 0;
}
