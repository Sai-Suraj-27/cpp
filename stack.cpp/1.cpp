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

void printstack(stack<string> st)
{
    while(!st.empty())
    {
        cout << st.top() << "\n";
        st.pop();
    }
}


int main() {
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    // Last in first out.
    stack<string> st;
    // push
    st.push("garlic");
	st.push("Cabbage");
    st.push("Potato");
    st.push("Apple");

    printstack(st);
    cout << "\n";
    
    st.pop();
    printstack(st);
    cout << "\n";
    
    st.push("onion");
    st.push("skfdl");
    st.push("ajbsl");

    printstack(st);
    cout << endl;

    st.pop();
    st.pop();
	
    printstack(st);
    cout << "\n";


    // Used in DFS of a graph.
    // Used in compiler syntax for checking matching brackets, braces.
    // Undo Mechanisms in text editors etc...

    
    
    return 0;
}
