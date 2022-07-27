#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    int n;
    cin >> n;
    int k;
    int minIndex = -1;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        v.push_back(k);
    }
    int minimum = INT_MAX;
    int i,j;
    for(i=0;i<n;i++)
    {
        minimum = v[i];
        minIndex = i;
        for(j=0;j<n;j++)
        {
            if(v[j] < minimum)
            {
                minIndex = j;
                minimum = v[j];
            }
        }
        cout << minIndex << " ";
        v[minIndex] = INT_MAX;
    }


    
    return 0;
}