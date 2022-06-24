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

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

void levelordertraversal(node *root) // This fn is just to print the tree as it looks so its of void type. and its argument is the root node.
{
    queue<node *> q; // We use node* type of queue to solve most of the problems related to level order traversal or similarly BFS(breadth first search).
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();

        q.pop();

        if (temp != NULL)
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
            {
                q.push(temp->left);
            }
            if (temp->right != NULL)
            {
                q.push(temp->right);
            }
        }
        else
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}

node *buildbst(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);
    node *temp = root;
    while (data != -1)
    {
        cout << "Enter the data: " << endl;
        cin >> data;
        if (data <= temp->data && data != -1)
        {
            temp->left = new node(data);
            temp = temp->left;
        }
        else if (data > temp->data && data != -1)
        {
            temp->right = new node(data);
            temp = temp->right;
        }
    }
    return root;
}

int main()
{
    node *root = NULL;
    root = buildbst(root);

    levelordertraversal(root);

    return 0;
}