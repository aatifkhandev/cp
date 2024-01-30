//binary search tree
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
void inorder(Node* root) {
    //base case
    if(root == NULL) {      //lnr
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);   //nlr
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";   //lrn

}


void levelordertraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node*temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
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
    //right part me insert karna hai
    root->right = insertIntoBst(root->right,d);
}
else{
    //left part me insert karna hai
    root->left=insertIntoBst(root->left,d);
}
return root;
}
//for printing min value
Node*minvalue(Node*root){
    Node*temp=root;
    while(temp->left!=NULL){
        temp=temp->left;

    }
    return temp;
}
//for printing max value
Node*maxvalue(Node*root){
    Node*temp=root;
    while(temp->right!=NULL){
        temp=temp->right;

    }
    return temp;
}
Node *deletefrombst(Node*root , int val){
    //base case
    if(root==NULL){
    return root;
}
if(root->data==val){
    //0 child
    if(root->left ==NULL && root->right==NULL){
        delete root;
        return NULL;
    }

    //1 child
    //child ka left
    if(root->left!=NULL && root->right==NULL){
        Node*temp=root->left;
        delete root;
        return temp;
    }
    //1 child ka right
     if(root->left==NULL && root->right!=NULL){
        Node*temp=root->right;
        delete root;
        return temp;
    }
    //2 child
    if(root->left!=NULL && root->right!=NULL){
        int mini = minvalue(root->right)->data;
        root->data=mini;
        root->right = deletefrombst(root->right,mini);
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
    cout<<"enter data to create bst"<<endl;
    takeInput(root);
    cout<<"printing the bst"<<endl;
    levelordertraversal(root);

    cout<<"printing inorder"<<endl;
    inorder(root);


    cout<<"printing preorder"<<endl;
    preorder(root);


    
    cout<<"printing postorder"<<endl;
    postorder(root);

    cout<<"min value is "<<minvalue(root)->data<<endl;
    cout<<"max value is" <<maxvalue(root)->data<<endl;
  root = deletefrombst(root,30);
  
    cout<<"printing the bst"<<endl;
    levelordertraversal(root);

    cout<<"printing inorder"<<endl;
    inorder(root);


    cout<<"printing preorder"<<endl;
    preorder(root);


    
    cout<<"printing postorder"<<endl;
    postorder(root);

    cout<<"min value is "<<minvalue(root)->data<<endl;
    cout<<"max value is" <<maxvalue(root)->data<<endl;
    return 0;


 }