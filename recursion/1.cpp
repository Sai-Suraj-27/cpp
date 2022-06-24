#include <bits/stdc++.h>
using namespace std;
#include <iostream>

int main()
{
    vector<int> v;
    long k;
    for (long i = 0; i < 3; i++)
    {
        cin >> k;
        v.push_back(k);
    }
    int i = 0;
    while (i < 3)
    {
        cout << v[i] << "\n";
        i++;
    }
    return 0;
}
