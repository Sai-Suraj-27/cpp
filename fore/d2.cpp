#include <bits/stdc++.h>
using namespace std;





int bfs(int i,vector<int>adj[], vector<int> &vis){


    vis[i]=1;
    queue<int> q;

    q.push(i);
    int level=0;

    while(!q.empty())
    {
        int m = q.size();
        for(int k=0;k<m;k++)
        {
            int cur = q.front();
            q.pop();

            for(auto itr:adj[cur])
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
    cin>>n;

    vector<int>parent(n+1,0);

    for(int i=1;i<=n;i++)
    {
        cin>>parent[i];
    }

    vector<int>adj[n+1];

    vector<int>v;

    for(int i=1;i<=n;i++){

        if(parent[i]!=-1)
        adj[parent[i]].push_back(i);
        else{
            v.push_back(i);
        }

        
    }
    vector<int> vis;
    vis.resize(n+1,0);

    int maxi =0;
    

    for(auto i:v){
        if(!vis[i]){
           int cur =  bfs(i,adj,vis);
           maxi = max(cur,maxi);
        }
    }
    cout<<maxi;
}