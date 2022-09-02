#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;


class Node
{
    public:
        Node* left;
        Node* right;
        ll val;

        Node(int d)
        {
            val = d;
        }

};


Node *solve(vector<ll> &v, ll l, ll r)
{
    if(l>r)
    {
        return NULL;
    }
    ll mid = l + (r-l)/2;

    Node* temp = new Node(v[mid]);
    temp->left = solve(v,l,mid-1);
    temp->right = solve(v,mid+1,r);

    return temp;
}




int main()
{
    ll n;
    cin >> n;

    vll v;
    ll i,j,k;

    for(i=0;i<n;i++)
    {
        cin >> k;
        v.pb(k);
    }

    Node* root = solve(v,0,n-1);

    cout << root->val << endl;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);


    while(!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL)
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->val << " ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }

        }
    }





    return 0;
}