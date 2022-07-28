#include<bits/stdc++.h>
using namespace std;
ll mod = 1e9 + 7;


vector<int> parent(mod);
vector<int> sizes(mod);

void make(int x)
{
    parent[x] = x;
    // Created a new independent node with it's parent = itself.
    sizes(x) = 1;
}

int find(int x)
{
    // Top most parent of x;
    if(parent[x] == x)
    {
        return x;
    }
    else
        parent[x] = find(parent[x]);
}


void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    // finding the topmost parents of a & b and then attaching one of the under other.
    if(a!=b)
    {
        if(sizes(a) < sizes(b))
        {
            swap(a,b);
            // a will be bigger now;
        }
        parent[b] = a;
        sizes[a] += sizes[b];
    }
}


int main()
{
    // for group related questions, DSU is very useful.
    // Finding connected components.
    // DSU is a Data strucutre
    // 3 Main fns of DSU are:   1. Make fn (To add an independent node to a network or to create new independent nodes),
    // 2. Find function (Gives the parent of the group or node)
    // 3. Union function (keep a,b into 1 group, If a&b are groups then they can be combined)

    
    // Now we can optimize the DSU in 2 ways,
    // 1. changing Union little bit to make it Union of a & b based on their sizes => We will attach smaller of a,b under the bigger one by checking their sizes.
    // 2. Path compression in find by making all the nodes directly attached to the top most parent when find(x) is called, It will directly give the parent in 1 step
    // In the future calls of find(x);

    








    return 0;
}