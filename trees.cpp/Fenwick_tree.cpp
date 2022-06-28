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








int main()
{
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    /*  Given some sequence of integers, each query is like, determine the sum of elements in this range [a,b].
        change the value at a particular position.

        if we use prefix sums method, then it will be very simple and easy, we can find prefix sums for all the indexes and to get the sum from
        [a,b] we just need to use, p_sum[b] - p_sum[a]; but in this case updating an element will now change the prefix sums of our
        array completely and it will take O(N) to update the prefix sums again in the worst case like if we update the 1st element of our array.

        So that's why we need an more efficient ways, so we like to have a D.S that's stores information at various array locations and then we
        can easily compute prefix sum upto and including that position. We only need to maintain the prefix sums because we can use that technique
        of computing sum in the range [a,b] in O(1).

        # Fenwick tree is organized by lowest set(1) bit, In this each cell has a range of responsibility.
        Given an array of integers A[0,1,2,...N-1] then, A Fenwick tree is just an array T[0,1,2,...N-1], where each of its elements is equal to the
        sum of elements of A in some range [g(i), i];
        
        where g is some function that satisfies 0 <= g(i) <= i; 

        we can see that ->  g(i) = i works, which results just in T == A; because of which summation queries are slow and take O(N) time.
                        ->  g(i) = 0 This will correspond to prefix sum arrays, which means that finding the sum of the range 
                                    will only take constant time O(1), but updates are slow as if we update an element we have to change the
                                    prefix summ array again.

        The clever part of the Fenwick algorithm is, that there it uses a special definition of the function g that can handle both these 
        operations in O(log N) time.

        There exists a simple implementation using bitwise operations for this fn g(i);
        g(i) = (i) & (i+1); we can observe here that this (g(i)) will be always <= i as we are doing an AND operation.

        Now to update all the sums of the fenwick tree/array T[0,1,2,3,...N-1] when an element is updated, IN O(log N) time we can do it by just
        iterating over all j's such that g(j) <= i <= j; 
        There is a simple way to do this... we can find all those j's by starting with i and flipping the last unset bit, if we call this 
        operation h(j) then, h(j) = (j) || (j+1).

        

    */










    
    
	
	
	
	return 0;
}
