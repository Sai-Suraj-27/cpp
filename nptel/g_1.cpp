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
        g.addEdje(u,v,true);
    }

    g.print_graph();







    return 0;
}