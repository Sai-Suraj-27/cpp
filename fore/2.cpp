#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<ll>
# define pb push_back
# define vi vector<int>


void merge(vll &v, ll s, ll e)
{
    ll mid = s + (e-s)/2;

    vll v1,v2;

    ll start = s;
    ll i,j;

    for(i=s;i<=mid;i++)
    {
        v1.push_back(v[i]);
    }
    for(i=mid+1;i<=e;i++)
    {
        v2.push_back(v[i]);
    }

    i=0,j=0;
    ll k = s;
    while(i<v1.size() and j<v2.size())
    {
        if(v1[i] <= v2[j])
        {
            v[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            v[k] = v2[j];
            j++;
            k++;
        }
    }
    while(i<v1.size())
    {
        v[k] = v1[i];
        i++;
        k++;
    }
    while(j<v2.size())
    {
        v[k] = v2[j];
        j++;
        k++;
    }
}



void mergesort(vll &v, ll s, ll e)
{
    if(s>=e)
    {
        return;
    }
    ll mid = s + (e-s)/2;

    mergesort(v,s,mid);
    mergesort(v,mid+1,e);

    merge(v,s,e);

}


int main()
{
    ll i,j,k;
    ll n;
    cin >> n;
    vll v;
    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }

    mergesort(v,0,n-1);

    for(auto i: v) cout << i << " ";
    cout << endl;





    return 0;
}
