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
template <typename T>

class graph
{
    public:
        unordered_map<T, list<T> > adj;

        void add_edge(T u, T v, bool type)
        {
            adj[u].pb(v);
            if(!type)
            {
                adj[v].pb(u);
            }
        }
        void printgraph()
        {
            for(int i=0;i<sz(adj);i++)
            {
                cout << i << "->";
                for(auto j : adj[i])
                {
                    cout << j << " ";
                }
                cout << "\n";   
            }
        }
};


int main() {
	// your code goes here.
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    // Graphs 1

    // Ad   jacency list or Adjacency Matrix between (nodes, edges) can be used.
    // O(n^2)

    // Implementing using adjacecny list.

    
    int n,m;
    cin >> n >> m;

    graph<int> g;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin >> u >> v;
        g.add_edge(u,v,false);
    }
    g.printgraph();

    

	
	
	return 0;
}
