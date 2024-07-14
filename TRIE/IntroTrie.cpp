#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    //constructor
    TrieNode(char ch){
        data = ch;
        for(int i = 0; i < 26; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{

    public:
    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        //base case
        if(word.length() == 0){
            root -> isTerminal = true;
            return;
        }

        //assuming that the word is in capital 
        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            // absent
            child = new TrieNode(word[0]);
            root -> children[index] = child;
        }
        //recursive call
        insertUtil(child, word.substr(1));
    }

    void insertNode(string word){
        insertUtil(root, word);
    }

    //search a word in TRie
    bool searchUtil(TrieNode* root, string word){
        if(word.length() == 0){
            return root -> isTerminal;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            //absent
            return false;
        }

        // recursive call 
        return searchUtil(child, word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root, word);
    }

    bool removeUtil(TrieNode* root, string word){
        if(word.length() == 0){
            if(root -> isTerminal){
                root -> isTerminal = false;
                return true;
            }
            else{
                return false;
            }
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            return false;
        }

        return removeUtil(child, word.substr(1));
    }

    bool deleteWord(string word){
        return removeUtil(root, word);
    }

    bool eraseUtil(TrieNode* root, string word){
        if(word.length() == 0 ){
            if(root -> isTerminal){
                root -> isTerminal = false;
                delete root;
                return true;
            }
            else{
                return false;
            }
        }

        int index = word[0] - 'A';
        TrieNode* child;

        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            return false;
        }

        bool ans = eraseUtil(child, word.substr(1));
        delete child;
        return ans;
    }

    bool erase(string word){
        return eraseUtil(root, word);
    }

    bool prefixUtil(TrieNode* root , string word){
        // base case
        if(word.length() == 0){
            return true;
        }

        int index = word[0] - 'A';
        TrieNode* child;

        //present 
        if(root -> children[index] != NULL){
            child = root -> children[index];
        }
        else{
            return false;
        }

        return prefixUtil(child, word.substr(1));
    }

    bool startWith(string word){
        return prefixUtil(root, word);
    }

};

int main (){

    Trie *t = new Trie();

    t -> insertNode("ARM");
    t -> insertNode("DO");
    t -> insertNode("TIME");

    t -> insertNode("AKASH");

    bool present = t -> searchWord("AKASH");

    if(present){
        cout<< " word is present " << endl;
    }
    else{
        cout << " word is absent " << endl;
    }

    t -> erase("AKASH");

    present = t -> searchWord("AKASH");

    if(present){
        cout<< " word is present " <<endl;
    }
    else{
        cout << " word is absent " <<endl;
    }

    t -> insertNode("AKASH");
    present = t -> searchWord("AKASH");

    if(present) {
        cout << "Word is Present!" << endl;
    } else {
        cout << "Word is Absent!" << endl;
    }

    cout<<"Present or Not "<< t->searchWord("TIM");

    return 0;
}