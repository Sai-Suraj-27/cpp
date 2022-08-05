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
        ll i = 0;
        while(n>1 && i<pow(10,6))
        {
            if(n%2==0)
            {
                n = n/2;
            }
            else
            {
                n = 3*n + 3;
            }
            i++;
        }
        cout << i << " " << n << endl;
    }

    // From the observations made for some numbers
    // also from the given code we can clearly see that if n is
    // a power of 2 then it will surely become 1 in log2(n) steps

    // Between 2 & 10 only 2,4,8 terminate all other numbers go into some sort of never ending loop.
    
      
    
    
 
	
	return 0;
}