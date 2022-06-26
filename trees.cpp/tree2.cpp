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


node* del_node_in_BST(node* root, ll d)
{
    if(root == NULL)
    {
        return root;
    }
    if(root->data == d)
    {
        // 0 child
        if(root->left == NULL && root->right == NULL)
        {
            delete root;
            return NULL;
        }

        // 1 child
        else if(root->left!= NULL)
        {
            node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->right == NULL)
        {
            node* temp = root->right;
            delete root;
            return temp;
        }

        // 2 child
        else
        {
            
        }
    }
    else if(d < root->data)
    {
        root -> left = del_node_in_BST(root->left);
        return root;
    }
    else if(d > root->data)
    {
        root -> right = del_node_in_BST(root->right);
        return root;
    }
}




int main()
{
    node* root = NULL;

    root = build_bst(root);

    // 10 8 21 7 27 5 4 3 -1
    cout << "lot of our tree: " << endl;
    lot_BST(root);
    cout << endl;

    // Note: Inorder of BST is sorted...
    cout << "inorder of our tree: " << endl;
    inorder(root);
    cout << endl;

    cout << "preorder of our tree: " << endl;
    preorder(root);
    cout << endl;

    cout << "postorder of our tree: " << endl;
    postorder(root);







    return 0;
}