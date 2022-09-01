#include<bits/stdc++.h>
#define ll  long long
#define vll vector<ll>
using namespace std;


class Node
{
    Node* links[26];
    bool flag = false;
    int cp = 0;

    bool containskey(char ch)
    {
        return links[ch - 'a'] != NULL;
    }
    void put(char ch, Node* new1)
    {
        links[ch-'a'] = new1;
    }
    void next(char ch)
    {
        return links[ch-'a'];
    }

    void declarecp(int n)
    {
        cp = n;
    }



}


class trie
{
    Node* root;
    trie()
    {
        root = new Node();
    }

    void index(string word, )
    {

    }

    void query(string word)
    {

    }

    void update(string word)



}






int main()
{
   ll n;
   cin >> n;

   while(n--)
   {
     char ch;
     cin >> ch;

     if(ch == 'I')
     {
        
     }
        
   }
    










    return 0;
}