#include bits/stdc++.h
using namespace std;
# define ll long long
# define vll vector<long long> v
# define vi vector<int>
# define pb push_back


struct Node
{
    Node* links[26];
    bool flag = flase;

    bool contains(char ch)
    {
        return links[ch - 'a'] != NULL
    }
}



class trie
{
    public:
        Node* root;
        trie()
        {
            root = new Node();
        }

        void insert(string word)
        {
            Node* temp = root;
            for(int i=0;i<word.size();i++)
            {

            }

        }

        bool search(string word)
        {

        }

        bool startswith(string word)
        {

        }




};









int main()
{
    ll i,j,k;
    vll v;













    return 0;
}