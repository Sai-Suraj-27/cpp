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
const int N = 1e5 + 10;
using namespace std;

int sizes[N];
int parent[N];


void make(int x)
{
    parent[x] = x;
    sizes[x] = 1;
}


int find(int a)
{
    if(parent[a] == a)
    {
        return a;
    }
    return parent[a] = find(parent[a]);
}


void Union(int a, int b)
{
    a = find(a);
    b = find(b);

    if(a!=b)
    {
        parent[b] = a;
        int temp = sizes[a];
        sizes[a] += sizes[b];
        sizes[b] += temp;
    }
}


int main()
{
    ll n,q;
    cin >> n >> q;

    int i;
    int k,l,r;
    for(i=1;i<=n;i++)
    {
        make(i);
    }
    
    while(q--)
    {
        char ch;
        cin >> ch;
        if(ch == 'M')
        {
            cin >> l >> r;
            Union(l,r);
            // cout << sizes[l] << " " << sizes[r];
        }
        else if(ch == 'Q')
        {
            cin >> k;
            cout << sizes[find(k)] << endl;
        }
    }
    return 0;
}