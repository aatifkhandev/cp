//Level Order Traversal

#include<iostream>
#include<queue>
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


void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node*temp = q.front();
        q.pop();

        if(temp == NULL) { 
            
            cout << endl;
            if(!q.empty()) { 
            
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}



int main(){
    Node *root =NULL;
    //Creating A Tree
    root=buildTree(root);
    cout<<"printing level order traversal"<<endl;
    levelOrderTraversal(root);
    return 0;
}