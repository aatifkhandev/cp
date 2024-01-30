//trie class
#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode *children[26];
    bool isterminal;
    
    //constructor
    TrieNode(char ch){
        data=ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;

        }
        isterminal=false;
    }
};

class Trie{
    public:
    TrieNode *root;

    Trie(){
        root=new TrieNode('\0');
    }
//insert function using recuriosn
void insertutil(TrieNode*root,string word){
    //base case
    if(word.length()==0){
        root->isterminal=true; 
        return; //last word ko terminal banana
    }
    //assumption word will be in CAPS
    int index = word[0]-'A';
    TrieNode*child;

    //present
    if(root->children[index]!=NULL){ //matlab child present hai
        child=root->children[index];
    }else{
        //absent , //create node
        child = new TrieNode(word[0]);
        root->children[index]=child;
    }
    //recursion
    insertutil(child,word.substr(1));
}
void insertword(string word){
    insertutil(root,word);
}

//search function
bool searchutil(TrieNode*root,string word){
    //base case
    if(word.length()==0){
        return root->isterminal;
    }
    int index=word[0]-'A';
    TrieNode*child;

//present
if(root->children[index]!=NULL){
    child=root->children[index];
}else{
    //absent
    return false;
}
//recursion
return searchutil(child,word.substr(1));
}

bool searchword(string word){
    return searchutil(root,word);
}




//delete
void removeword(TrieNode*root , string word){
        if(word.length()==0){
     root->isterminal=false;
     return;
    }
    int index=word[0]-'A';
    TrieNode*child;

//present
if(root->children[index]!=NULL){
    child=root->children[index];
}else{
    //absent
    return;
}
//recursion
return removeword(child,word.substr(1));
}
};



int main(){
    Trie*t=new Trie();

    t->insertword("ARM");
    t->insertword("DO");
    t->insertword("TIME");

    cout<<"present or not"<<t->searchword("TIME")<<endl;
    t->removeword('\0',"M");
    cout<<t->searchword("TIME");
   return 0;

}