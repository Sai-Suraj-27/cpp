#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
#define pb push_back
using namespace std;


class Node
{
    public:
        unordered_map<char,Node*> links;
        int ew = 0;
        int cp = 0;
};


class Trie
{
    public:
        Node* root;

        Trie()
        {
            root = new Node();
        }

        void insert(string word, int freq)
        {
            Node* temp = root;
            for(int i=0;i<word.size();i++)
            {
                if(temp->links.count(word[i]) == 0)
                {
                    temp->links[word[i]] = new Node();
                }
                temp = temp->links[word[i]];
                temp->cp += freq;
            }
            temp -> ew += freq;

        }

        void update(string word, int freq)
        {
            Node* temp = root;
            int del = freq - wordquery(word);

            for(int i=0;i<word.size();i++)
            {
                if(temp->links.count(word[i]) == 0)
                    return;

                temp = temp->links[word[i]];
                temp -> cp += del;
            }
            temp->ew += del;
        }

        int pref_freq(string pref)
        {
            Node* temp = root;
            for(int i=0;i<pref.size();i++)
            {
                if(temp->links[pref[i]])
                {
                    temp = temp->links[pref[i]];
                }
                else
                {
                    return 0;
                }
            }
            return temp->cp;
        }

        int wordquery(string word)
        {
            Node* temp = root;
            for(int i=0;i<word.size();i++)
            {
                if(temp->links[word[i]])
                {
                    temp = temp->links[word[i]];
                }
                else
                {
                    return 0;
                }
            }
            return temp->ew;
        }

};




int main()
{
    ll n;
    cin >> n;
    Trie t;
    
    while(n--)
    {
        char ch;
        cin >> ch;
        string s;
        int freq;
        
        if(ch == 'I')
        {
            cin >> s;
            cin >> freq;

            t.insert(s,freq);

        }
        else if(ch == 'U')
        {
            cin >> s;
            cin >> freq;

            t.update(s,freq);
        }
        else if(ch == 'Q')
        {
            cin >> s;
            cout << max(t.wordquery(s),t.pref_freq(s)) << endl;
        }

    }











    return 0;
}