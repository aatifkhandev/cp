//building binary tree
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;

    //constructor
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }

};
Node *buildtree(Node *root){
    cout<<"enter a data : "<<endl;
    int data;
    cin>>data;
    root = new Node(data); //pegle root node me daalre
    if(data==-1){
        return NULL;
    }
    cout<<"insert data for inserting in left"<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"enter data for inserting in right"<<data<<endl;
    root->right=buildtree(root->right);
    return root;

}


int main(){
    Node *root =NULL;
    //creating a tree
    root=buildtree(root);
    return 0;
}