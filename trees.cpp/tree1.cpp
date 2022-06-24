#include <bits/stdc++.h>
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

node* build_BT(node* root)  
{
    ll d;
    cin >> d;
    if(d == -1)
    {
        return root;
    }
    else
    {
        root = new node(d);
    }

    cout << "Enter the data for left child of: " << root->data << endl;
    root -> left = build_BT(root->left);

    cout << "Enter the data for right child of: " << root-> data << endl;
    root -> right = build_BT(root->right);

    return root;
}

void lot_BT(node* root)
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
            cout << temp->data << " ";

            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
        }
        else
        {
            cout << "\n";
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
    }
    return;

}

node* build_BT_from_lot(node* root)
{
    ll d;
    cin >> d;
    root = new node(d);

    queue<node*> q;
    q.push(root);

    while(!q.empty())
    {
        node* temp = q.front();
        q.pop();

        cout << "Enter the left child of: " << temp->data << endl;    
        cin >> d;
        if(d != -1)
        {
            temp->left = new node(d);
            q.push(temp->left);
        }
        cout << "Enter the right child of: " << temp->data << endl;    
        cin >> d;
        if(d != -1)
        {
            temp->right = new node(d);
            q.push(temp->right);
        }
    }
    return root;
}

void inorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root)
{
    if(root == NULL)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root -> data << " ";
}

int main()
{
    node* root1 = NULL;
    node* root = NULL;
    cout << "Enter data for root: " << endl;
    root = build_BT(root1);
    
    // our tree:  1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    
    lot_BT(root);
    cout << endl;
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);


    node* root2 = NULL;
    // our tree: 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    cout << "Enter the data of root2 to build using lot: " << endl;
    root2 = build_BT_from_lot(root2);

    root = root2;
    lot_BT(root);
    cout << endl;
    inorder(root);
    cout << endl;
    preorder(root);
    cout << endl;
    postorder(root);






    return 0;
}
