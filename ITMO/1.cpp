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


// suffix array for string related problems.






int main()
{

    string s = "ababba";
    s += "$";
    cout << s;
    
    // lexicographical order 
    /*
    -> 1st write lexicograohical order of different substrings.
    -> Make all of them of same length by adding the next part of string cyclically.
    -> Make the lengths of all of them some power of 2.

    $ababba + $
    a$ababb + a 
    ababba$ + a
    abba$ab + a
    ba$abab + b
    babba$a + b
    bba$aba + b

    -> Next we need to sort the strings which are cyclic shifts of the string s
    
    Algorithm:

    s = ababba$

    iteration k = 0:
        -> We have strings of length 2^k = 1;
        so the sorted array with strings of len = 1, will be:
        $ a a a b b b; Now we will assign some integer to these to help us in comparing strings of length 2^(k+1);
        0 1 1 1 2 2 2;
        
    iteration k = 1:
        -> We take all strings of length = 2^k = 2;
        Now we split each string into 2 halves. 
        Now we will compare the individual halves of all the strings based on their integer classes and sort them.

        -> We will again assign some integer to these to help us in comparing the strings in next iteration;

        we will sort the pairs.

    If at the end of any iteration if all the assigned int classes are different then,
    we can end the algorithm, as even if we attach new chars to these strings in the
    next level of 2^(k+1); The order of the suffix arrays does not change. Just by 
    adding more characters to right, does not alter the order of strings.

    The final array we get is the correct Suffix array of the string.




    */

    
















    return 0;
}