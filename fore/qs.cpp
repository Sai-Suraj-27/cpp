#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<long long>
# define vi vector<int>
# define pb push_back

ll ption(vll &v, ll s, ll e)
{
    ll smaller = 0;
    ll pivot = v[s];
    for(ll i=s+1;i<=e;i++)
    {
        if(v[i] < pivot)
            smaller++;
    }
    ll pivot_index = s + smaller;
    swap(v[s],v[s+smaller]);

    ll i = s,j=e;

    while(i<pivot_index and j > pivot_index)
    {
        while(v[i] <= pivot)
        {
            i++;
        }
        while(v[j] >= pivot)
        {
            j--;
        }

        if(i < pivot_index and j > pivot_index)
        {
            swap(v[i],v[j]);
        }
    }
    return pivot_index;

}

void quicksort(vll &v, ll s, ll e)
{
    if(s>=e)
    {
        return;
    }
    ll p = ption(v,s,e);

    quicksort(v,s,p-1);
    quicksort(v,p+1,e);
    return;

}





int main()
{
    ll i,j,k;
    vll v;

    ll n;
    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }
    quicksort(v,0,n-1);

    for(i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }




    return 0;
}