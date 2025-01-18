//Binary Search Tree
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
void inOrder(Node* root) {
    
    if(root == NULL) {      
        return ;
    }

    inOrder(root->left);
    cout << root-> data << " ";
    inOrder(root->right);

}

void preOrder(Node* root) {
    
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preOrderOrder(root->left);   
    preOrder(root->right);

}

void postOrder(Node* root) {
    
    if(root == NULL) {
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout << root-> data << " ";   

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


Node *insertIntoBst(Node*root,int d){
    if(root==NULL){
    root=new Node(d);
    return root;
}
if(d>root->data){
    //Insert Into Right Node
    root->right = insertIntoBst(root->right,d);
}
else{
    //Insert Into Left Node
    root->left=insertIntoBst(root->left,d);
}
return root;
}
//For Printing Min Value
Node*minValue(Node*root){
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;

    }
    return temp;
}
//For Printing Max Value
Node*maxValue(Node*root){
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;

    }
    return temp;
}
Node *deleteFromBst(Node*root , int val){
   
    if(root==NULL){
    return root;
}
if(root->data==val){
    
    if(root->left ==NULL && root->right==NULL){
        delete root;
        return NULL;
    }

    
    if(root->left!=NULL && root->right==NULL){
        Node*temp=root->left;
        delete root;
        return temp;
    }
   
     if(root->left==NULL && root->right!=NULL){
        Node*temp=root->right;
        delete root;
        return temp;
    }
  
    if(root->left!=NULL && root->right!=NULL){
        int mini = minValue(root->right)->data;
        root->data=mini;
        root->right = deleteFromBst(root->right,mini);
        return root;
    }
}
}
 
 void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertIntoBst(root,data);
        cin>>data;
    }
 }


 int main(){
    Node *root=NULL;
    cout<<"Enter data to create bst"<<endl;
    takeInput(root);
    cout<<"printing the Bst"<<endl;
    levelOrderTraversal(root);

    cout<<"printing inOrder"<<endl;
    inOrder(root);


    cout<<"printing preOrder"<<endl;
    preOrder(root);


    
    cout<<"printing postOrder"<<endl;
    postOrder(root);

    cout<<"Min value is "<<minValue(root)->data<<endl;
    cout<<"Max value is" <<maxValue(root)->data<<endl;
  root = deleteFromBst(root,30);
  
    cout<<"printing the bst"<<endl;
    levelOrderTraversal(root);

    cout<<"printing inOrder"<<endl;
    inOrder(root);


    cout<<"printing preOrder"<<endl;
    preOrder(root);


    
    cout<<"Printing postOrder"<<endl;
    postOrder(root);

    cout<<"Min value is "<<minValue(root)->data<<endl;
    cout<<"Max value is" <<maxValue(root)->data<<endl;
    return 0;


 }