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
        unordered_map<T, list<T> > mp;

        void addEdge(T u, T v, bool type)
        {
            // type = false -> undirected graph
            // type = true  -> Directed graph

            // mp[i] = a list, list<int> 

            mp[u].push_back(v);
            if(!type)
            {
                // An undirected graph;
                mp[v].push_back(u);
            }
        }
        void printgraph()
        {
            for(auto i: mp)
            {
                cout << i.first << "->";
                for(auto j: i.second)
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

    ll n,m;
    cin >> n >> m;

    ll i=0,j=0,k;
    ll u,v;
    graph<int> g;

    for(i=0;i<m;i++)
    {
        cin >> u >> v;
        g.addEdge(u,v,false);
    }
    g.printgraph();

	
	
	return 0;
}
