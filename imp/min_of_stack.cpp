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

    // We want to find the min of stack in O(1)

    ll i,j;
    stack<pair<ll,ll>> st;

    ll k;
    ll n;
    cin >> n;
    ll mini = INT_MAX;
    for(i=0;i<n;i++)
    {
        cin >> k;
        st.push({k,min(k,mini)});
        mini = min(k,mini);
    }
    cout << st.top().second << endl;

    queue<ll> q;
    ll mini2 = INT_MAX;

    for(i=0;i<n;i++)
    {
        cin >> k;
        
    }
    return 0;
}


// Create a stack with pair<int,int> as type, and insert new element in 1st int and min of all in second int.
// Same with queue and dequeue also...
