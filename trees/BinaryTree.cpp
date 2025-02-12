//Binary Tree
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
Node *buildTree(Node *root){
    cout<<"enter a data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data); 
    if(data==-1){
        return NULL;
    }
    cout<<"insert data for inserting in left"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for inserting in right"<<data<<endl;
    root->right=buildTree(root->right);
    return root;

}


int main(){
    Node *root =NULL;
    
    root=buildTree(root);
    return 0;
}