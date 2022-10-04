#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;




// Directed and Undirected graphs
// A Data structure with Nodes (Entities to store data) and 
// edjes (connection between Nodes);
// In undirected graph degree of a vertex = No.of edjes attached to it.
// In a directed graph degree is of 2 types => Indegree(No.of edjes comming into that vertex).
// OutDegree(No. of edjes going out from that vertex).


// Weighted graphs => Edjes have weights.
// Path => Starting from any node we will go to other nodes in the 
// possible directions but none of the nodes should be repeated.

// Cyclic and Acyclic graphs.

// Graphs : 1) Adjacency List => A vector/list for each vertex consisiting of all the immediate nodes which can be reached from this node.
//          2) Adjacency Matrix => S.C = O(N^2);

// Input: n(No.of Nodes), m(No.of Edjes), and m lines consisting of edjes
// Either directed or un directed.



// Implementation

template <typename T>
class graph
{
    public:

    unordered_map<T,vector<T>> adj;
    void addEdje(T u, T v, bool directed)
    {
        adj[u].pb(v);
        if(!directed)
        {
            adj[v].pb(u);
        }
    }

    void print_graph()
    {
        for(auto i: adj)
        {
            cout << i.first << "->";
            for(auto j: i.second)
            {
                cout << j << ", ";
            }
            cout << endl;
        }
    }


    // BFS -> O(N+E); , S.C -> O(N) for vis array;
    void bfs(vector<bool> &vis,ll i)
    {
        queue<T> q;
        vis[i] = true;
        q.push(i);

        while(!q.empty())
        {
            ll temp = q.front();
            cout << temp << " ";
            // vis[temp] = true;
            q.pop();

            for(auto i : adj[temp])
            {
                if(!vis[i])
                {
                    q.push(i);
                    vis[i] = true;
                }
            }
        }
        return;

    }

    // DFS -> O(N+E), S.C -> O(N) for vis1 array;
    void dfs(vector<bool> &vis1, ll i)
    {
        vis1[i] = true;
        cout << i << " ";

        for(auto j: adj[i])
        {
            if(!vis1[j])
            {
                dfs(vis1,j);
            }
        }
        return;

    }

    bool cyclicBFS(vector<bool> &vis2, ll i)
    {
        queue<ll> q;
        unordered_map<ll,ll> parent;
        parent[i] = -1; 
        q.push(i);
        vis2[i] = true;

        while(!q.empty())
        {
            ll temp = q.front();
            q.pop();

            for(auto j: adj[temp])
            {
                if(!vis2[j])
                {
                    q.push(j);
                    vis2[j] = true;
                    parent[j]=temp;
                }
                else if(vis2[j] and parent[temp] != j)
                {
                    return true;
                }
            }
        }
        return false;

    }



};






int main()
{
    graph<ll> g;

    ll n,m;
    cin >> n >> m;

    ll i,j,k,u,v;
    for(i=1;i<=m;i++)
    {
        cin >> u >> v;
        g.addEdje(u,v,false);
    }

    g.print_graph();

    vector<bool> vis(n, false);
    
    for(i=0;i<n;i++)
    {
        if(!vis[i])
        {
            g.bfs(vis,i);
        }
    }

    cout << endl;
    
    vector<bool> vis1(n,false);
    for(i=0;i<n;i++)
    {
        if(!vis1[i])
        {
            g.dfs(vis1,i);
        }
    }

    vector<bool> vis2(n,false);
    bool cyclic = false;
    for(i=0;i<n;i++)
    {
        if(!vis2[i])
        {
            if(g.cyclicBFS(vis2,i))
            {
                cyclic = true;
            }
        }
    }
    cout << endl;
    
    if(cyclic)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }







    return 0;
}