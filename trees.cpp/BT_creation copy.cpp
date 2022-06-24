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

// first we will create the required node.

class node
{
public:
    int data;
    node *left;
    node *right;

    // constructor. When ever we create a new node its left & right intially points to NULL;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

// fn to build/ create a tree, using basic recursion.

node *buildtree(node *root) // This is a fn, Now, as at last it will return the root of the tree -> we are using node* type....fn.
{
    cout << "Enter the data: " << endl;
    ll data;
    cin >> data;
    if (data == -1)
    {
        return NULL;
    }
    root = new node(data);

    // Now we will enter the data for left child of the root node which will be created using the recursion call below.
    cout << "Enter the data for left child: "
         << "that is the left child of " << data << endl;
    root->left = buildtree(root->left);
    cout << "Enter the data for right child: "
         << "that is the right child of " << data << endl;
    // similarily we will do it for right child using the recursive call below.
    root->right = buildtree(root->right);
    return root;
}

// fn to build tree from given level order traversal

node *buildtreefrom_lot(node *root)
{
    int data;
    cout << "Enter data for root" << endl;
    cin >> data;
    root = new node(data);

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        cout << "Enter the left node of: " << temp->data << endl;
        int leftdata;
        cin >> leftdata;

        if (leftdata != -1)
        {
            temp->left = new node(leftdata);
            q.push(temp->left);
        }

        cout
            << "Enter the right node of: " << temp->data << endl;
        int rightdata;
        cin >> rightdata;

        if (rightdata != -1)
        {
            temp->right = new node(rightdata);
            q.push(temp->right);
        }
    }
    return root;
}

// Now inorder get a good picture of our tree we should try to print it in the same way as it looks:

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

void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

int main()
{

    node *root = NULL;
    //  1 3 9 -1 -1 11 -1 -1 5 13 -1 -1 -1
    // root = buildtree(root);

    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    root = buildtreefrom_lot(root);

    cout << "level order traversal of the tree: " << endl;
    levelordertraversal(root);

    cout << "inorder traversal of the tree: " << endl;
    inorder(root);
    cout << "\n";

    cout << "preorder traversal of the tree: " << endl;
    preorder(root);
    cout << "\n";

    cout << "postorder traversal of the tree: " << endl;
    postorder(root);
    cout << "\n";

    return 0;
}
