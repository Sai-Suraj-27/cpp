#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9 + 7;


vector<int> parent(1000000);
vector<int> sizes(1000000);

void make(int x)
{
    parent[x] = x;
    // Created a new independent node with it's parent = itself.
    sizes[x] = 1;
}

int find(int x)
{
    // Top most parent of x;
    if(parent[x] == x)
    {
        return x;
    }
    parent[x] = find(parent[x]);
}


void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    // finding the topmost parents of a & b and then attaching one of the under other.
    if(a!=b)
    {
        if(sizes[a] < sizes[b])
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

    
    // T.C => O(alpha(n)); => Ackerman function.
    // Amortized T.C, which means -> after using the function good number of times, time complexity is almost constant in this case of DSU, ~ O(4);

    // Wihtout path compression -> T.C = O(log N);
    // Otherwise with full optimization -> T.C ~ O(1)


    long long n;
	cin >> n;

	long long k;
	cin >> k;
    long long c = 0;
	long long u,v,i,j;

    for(i=1;i<=n;i++)
    {
        make(i);
    }
	for(i=1;i<=k;i++)
	{
		cin >> u >> v;
        Union(u,v);
	}
    for(i=1;i<=n;i++)
    {
        if(find(i) == i)
            c++;
    }
    cout << c << endl;

    return 0;
}