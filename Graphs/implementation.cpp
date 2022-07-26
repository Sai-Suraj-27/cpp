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


void bfs(vector<set<int>> &adj, unordered_map<int,bool> &visited, int root, vector<int> &bfs_g)
{
    queue<int> q;
    q.push(root);
    visited[root] = true;

    while(!q.empty())
    {
        int temp = q.front();
        q.pop();
        bfs_g.push_back(temp);
        
        // push all the neighbours of this node;
        for(auto i: adj[temp])
        {
            if(!visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}



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
    cout << n << m;
    graph<int> g;
    vector<set<int>> adj;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin >> u >> v;
        g.add_edge(u,v,false);
        adj[u].insert(v);
        adj[v].insert(u);
    }
    g.printgraph();

    


    // BFS -> A traversal technique.
    // Take care of disconnected componenets...also;

    unordered_map<int,bool> visited;
    
    queue<int> q;
    vector<int> bfs_g;

    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            bfs(adj,visited,i,bfs_g);
        }
    }

    for(auto i: bfs_g)
    {
        cout << i << " ";
    }

    // DFS -> Another traversal technique.






    // Cycle detection in undirected graphs, using BFS & DFS.



	
	return 0;
}
