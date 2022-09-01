#include <bits/stdc++.h>
using namespace std;

vector<bool>vis;

int mf=0,mof=0;

void dfs(int i, vector<int> adj[], int eFlip, int oFlip, int level, vector<int>v, vector<int> d)
{

    vis[i]=1;

    if(level%2==0 && eFlip%2!=0)v[i]=1-v[i];
    else if(level%2!=0 && oFlip%2!=0)v[i]=1-v[i];


    if(v[i]!=d[i]){

        if(level%2==0){
            eFlip++;
            mf++;
        }
        else{
            oFlip++;
            mof++;
        }
        
    }

    

    for(auto itr:adj[i])
    {
        if(!vis[itr])
        {
            dfs(itr,adj,eFlip,oFlip,level+1,v,d);
        }
    }
}

int main()
{
    int n;
    
    cin >> n;

    vector<int>adj[n+1];

    vis.resize(n+1,0);

    for(int i=1;i<=n-1;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    vector<int>v(n+1);
    vector<int>d(n+1);

    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }

    for(int i=1;i<=n;i++)
    {
        cin>>d[i];
    }

    dfs(1,adj,0,0,0,v,d);

    cout<< mof + mf;


}