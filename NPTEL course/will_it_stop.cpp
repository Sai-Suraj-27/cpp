#include<bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i,a,n) for(ll i=a;i<n;i++)
#define B(i,a,n) for(ll i=n-1;i>=a;i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
ll mod = 1e9 + 7;
using namespace std;

/* inline bool isPalindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}*/

template<typename T>
bool allEqual(std::vector<T> const &v) {
    if (v.size() == 0) {
        return false;
    }
    return std::equal(v.begin() + 1, v.end(), v.begin());
}

ll no_uniq(vector<ll> v)
{
    sort(all(v));
    return distance(v.begin(),unique(v.begin(), v.end()));
}




int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    ll t;
    cin >> t;
    
    while(t--)
    {
        ll n;
        cin >> n;

        // qn -> will the given code terminate for a given number 2<= n <= pow(10,14); ?
        
        // we have to find some pattern to say yes or no...
        
        if(log2(n) == ceil(log2(n)) and ((n)^(n-1)&n) == n)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    // From the observations made for some numbers
    // also from the given code we can clearly see that if n is
    // a power of 2 then it will surely become 1 in log2(n) steps

    // Between 2 & 10 only 2,4,8 terminate all other numbers go into some sort of never ending loop.

    /*
    Now if n is not a power of 2;
    1. If n is odd
        then in the 1st step it will become 3*(n+1);
        which means it becomes a multiple of 3, now as we will
        never divide by 3 again it will always have a factor of 3

    Hence it will never terminate.

    2. If n is even (not power of 2)
        Now at some step after getting continuosly divided by 2 it will become odd
        since it is not a power of 2;
        And now it is same as the above case, It will never terminate.

    */

    // So finally the answer is:
    // N will terminate only when n is a pow of 2;    
    
 
	
	return 0;
}
