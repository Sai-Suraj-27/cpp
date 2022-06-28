#include<bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define sz(x)  (long long) (x).size()
#define ll long long int
#define ld long double
#define mp make_pair
#define pb push_back
#define vi vector<int> 
#define vll vector<long long>
#define mod 1e9+7
using namespace std;


class node
{
    public:
        ll data;
        node* left;
        node* right;

        node(ll d)
        {
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* insert_in_BST(node* root, ll d)
{
    if(root==NULL)
    {
        root = new node(d);
        return root;
    }
    if(d < root->data)
    {
        root -> left = insert_in_BST(root->left, d);
    }
    else if(d > root->data)
    {
        root->right = insert_in_BST(root->right, d);
    }
    return root;
}

node* build_bst(node* root)
{
    ll d;
    cin >> d;
    while(d != -1)
    {
        root = insert_in_BST(root,d);
        cout << "Enter members for our BST: " << endl;
        cin >> d;
    }

    return root;

}

void lot_BST(node* root)
{
    queue<node*> q;
    q.push(root);
    q.push(NULL);
    node* temp = root;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp != NULL)
        {
            cout << temp -> data << " ";
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp ->right)
            {
                q.push(temp->right);
            }
        }
        else
        {
            cout << endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
    }
    return;

}

// Note: Inorder of BST is sorted...
void inorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

ll min_bst(node* root)
{
    node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp -> left;
    }
    return temp->data;
}

ll max_bst(node* root)
{
    node* temp = root;
    while(temp-> right != NULL)
    {
        temp = temp -> right;
    }
    return temp->data;
}

node* del_node_bst(node* root, ll d)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->data == d)
    {
        // we have to cover the different casees here:

        // if -> 0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // If -> only 1 child
        
        // left one:
        if(root->left != NULL && root->right == NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
        // right one:
        if(root->left == NULL && root->right != NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }

        // If there are 2 children: both left & right then we have
        // replace our root node with max value from left subtree
        // or min value from right subtree:

        if(root->left != NULL && root->right != NULL)
        {
            ll reqmax = max_bst(root -> left);
            root->data = reqmax;
            root->left = del_node_bst(root->left, reqmax);
            return root;
        }
    }
    else if(root->data > d)
    {
        root->left = del_node_bst(root->left,d);
        return root;
    }
    else if(root->data < d)
    {
        root->right = del_node_bst(root->right,d);
        return root;
    }

}



int main()
{
    node* root = NULL;

    root = build_bst(root);

    // 10 8 21 7 27 5 4 3 -1
    // 50 20 70 10 30 90 110 -1
    cout << "lot of our tree: " << endl;
    lot_BST(root);
    cout << endl;

    // Note: Inorder (LNR) of BST is sorted...

    cout << "inorder of our tree: " << endl;
    inorder(root);
    cout << endl;

    cout << "preorder of our tree: " << endl;
    preorder(root);
    cout << endl;

    cout << "postorder of our tree: " << endl;
    postorder(root);

    cout << "Min value of the tree is: " << endl;
    cout << min_bst(root) << endl;

    cout << "Max value of the tree is: " << endl;
    cout << max_bst(root) << endl;

    // 100 50 110 25 70 120 60 115 -1

    // deleted one node
    root = del_node_bst(root, 10);

    cout << "lot of our tree: " << endl;
    lot_BST(root);
    cout << endl;

    cout << "inorder of our tree: " << endl;
    inorder(root);
    cout << endl;

    cout << "preorder of our tree: " << endl;
    preorder(root);
    cout << endl;

    cout << "postorder of our tree: " << endl;
    postorder(root);

    cout << "Min value of the tree is: " << endl;
    cout << min_bst(root) << endl;

    cout << "Max value of the tree is: " << endl;
    cout << max_bst(root) << endl;

    return 0;
}