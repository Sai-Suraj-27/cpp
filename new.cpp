#include<bits/stdc++.h>
using namespace std;


int maxprofit(vector<int> A, vector<int> B, int n, int k)
{
    sort(A.begin(),A.end());

    int i=0,j=1;
    int profit = 0;
    // Ai + Aj <= k;
    int maxp = 0;
    while(i<=j)
    {
        if(j==n)
        {
            i++;
            j=i+1;
        }
        if(A[i] + A[j] <= k && j<n)
        {
            profit += B[i] + B[j];
            j++;
        }
        else
        {
            break;
        }
        maxp = max(profit,maxp);
        profit = 0;
    }
    return maxp;
}


int main()
{
    vector<int> A;
    vector<int> B;

    int n,k;
    cin >> n >> k;

    int i,j,l;

    for(i=0;i<n;i++)
    {
        cin >> l;
        A.push_back(l);
    }
    for(i=0;i<n;i++)
    {
        cin >> l;
        B.push_back(l);
    }

    int result = maxprofit(A,B,n,k);
    cout << result << endl;






    return 0;
}