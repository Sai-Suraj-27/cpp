#include <bits/stdc++.h>
using namespace std;
# define ll long long
# define vll vector<long long>
# define vi vector<int>
# define pb push_back






int main()
{
    ll i,j,k;
    vll v;

    ll n;
    cin >> n;

    priority_queue<int> pq; // Max headp; top element will be maximum one.
    priority_queue<int, vector<int>, greater<int>> pq1;
    // This is a min heap, Top element will give minimum one.


    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
        pq.push(k);
        pq1.push(k);
    }

    while(!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
    while(!pq1.empty())
    {
        cout << pq1.top() << " ";
        pq1.pop();
    }

   

    // It is either min heap or max heap;
    // Gives min or max of a stream of elements in O(1);

    // Cost of insertion and extraction/deletion is O(log N);

    















    return 0;
}