#include<bits/stdc++.h>
using namespace std;
ll mod = 1e9 + 7;


vector<int> parent(mod);

void make(int x)
{
    parent[x] = x;
    // Created a new independent node with it's parent = itself
}

int find(int x)
{
    // Top most parent of x;
    if(parent[x] == x)
    {
        return x;
    }
    else
        find(parent[x]);
}


void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    // finding the topmost parents of a & b and then attaching one of the under other.
    if(a!=b)
        parent[b] = a;
}


int main()
{
    // for group related questions, DSU is very useful.
    // Finding connected components.
    // DSU is a Data strucutre
    // 3 Main fns of DSU are:   1. Make fn (To add an independent node to a network or to create new independent nodes),
    // 2. Find function (Gives the parent of the group or node)
    // 3. Union function (keep a,b into 1 group, If a&b are groups then they can be combined)

    











    return 0;
}