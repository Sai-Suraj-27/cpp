#include <bits/stdc++.h>
#define sz(x) (int)x.size()
#define all(x) (x).begin(), (x).end()
#define F(i, a, n) for (ll i = a; i < n; i++)
#define B(i, a, n) for (ll i = n - 1; i >= a; i--)
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define vll vector<ll>
ll mod = 1e9 + 7;
using namespace std;






int bfs(int i,vector<int> &adj, vector<int> &vis)
{

    vis[i]=1;
    queue<int> q;

    q.push(i);
    int level = 0;

    while(!q.empty()){

        int m = q.size();

        for(int k = 0;k < m;k++)
        {
            int cur = q.front();
            q.pop();

            for(auto itr : adj[cur])
            {
                if(!vis[itr])
                {
                    q.push(itr);
                    vis[itr]=1;
                }
            }
        }

        level++;
        
    }

    return level;
}

int main(){

    int n;
    cin >> n;

    vector<int>parent(n+1,0);

    for(int i=1;i<=n;i++)
    {
        cin >> parent[i];
    }
    vector<int> adj(n+1);

    vector<int>v;

    for(int i=1;i<=n;i++)
    {

        if(parent[i]!=-1)
        {
            adj[parent[i]] = i;
        }
        else
        {
            v.pb(i);
        }

        
    }
    vector<int> vis;
    vis.resize(n+1,0);

    int maxi =0;
    

    for(auto i:v)
    {
        if(!vis[i])
        {
           int cur = bfs(i,adj,vis);
           maxi = max(cur,maxi);
        }
    }
    cout << maxi << endl;
}