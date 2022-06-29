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
using namespace std;


void sorty(vll &v)
{
    sort(all(v));
    return;
}

int main()
{

    ll i,n,k;
    cin >> n;
    vll v;
    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }

    sorty(v);


    for(i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }



    vector<int> solve(vector<int> arr, vector<int> queries) {
    vector<int> result;
    for(int i=0;i<queries.size();i++)
    {
        int k=queries[i];
        vector<int> v;
        deque<int> dq;
        for(int i=0;i<k;i++)
        {
            while(dq.empty()!=true && arr[i]>arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        for(int i=k;i<arr.size();i++)
        {
            v.push_back(arr[dq.front()]);
            while(dq.empty()!=true && dq.front()<=i-k)
                dq.pop_front();
            while(dq.empty()!=true && arr[i]>=arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        v.push_back(arr[dq.front()]);   
        sort(v.begin(),v.end());
        result.push_back(v[0]);
    }
    return result;
}





    return 0;
}