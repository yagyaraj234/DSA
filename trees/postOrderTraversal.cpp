#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;    
    node* right;   

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;  
    } 
};

node* buildTree(node* root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter the left data of  "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter the right data of  "<<data<<endl;
    root->right=buildTree(root->right);

    return root;

}

// Level Order Traversal
void postOrderTraversal(node* root){
    
    
    if (root == NULL){
        return ;
    }

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root=NULL;
    root=buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    
    // Level order traversel(root);

    cout<<"Printing Post order traversal"<<endl;
    postOrderTraversal(root);

return 0;
}