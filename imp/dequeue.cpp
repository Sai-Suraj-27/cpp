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
    deque<pair<ll,ll>> dq;

    ll k;
    ll n;
    cin >> n;
    ll mini = 10000000;
    for(i=0;i<n;i++)
    {
        cin >> k;
        dq.push_front({k,min(k,mini)});
        mini = min(mini,k);
    }
    auto it = dq.rbegin();
    cout << (*it).first << " " << (*it).second; cout << endl;
    dq.pop_back();
    cout << (dq.back()).first << " " << (dq.back()).second;   cout << endl;
    dq.pop_front();
    cout << (dq.front()).first << " " << (dq.front()).second;   cout << endl;
    auto it1 = dq.rend();
    cout << (*it1).first << " " << (*it1).second;  // generates random numbers as dq.rend() points to position with no value in it (1 position before the front most element).
    // cout << dq.max_size() << endl;  Returns the maximum number of elements deque can contain.
    
    

    return 0;
}


// dq.rbegin() points to the last element of the deque that is the back most element => dq.back() = *it   where, it = dq.rbegin();
// dq.rend() points to the position before the first element of the deque that is 1 position before the front most element.

// pop_front() function is used to pop elements from a deque from the front and pop_back( ) function is used to pop elements from a deque from the back.
// at() points to the position of the element given in the parameter and swap( ) is used two swap elements of two deques.
// insert(): increases the container side by inserting element in the specified position.


