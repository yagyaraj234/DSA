#include<bits/stdc++.h>
using namespace std;
class node {
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
    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the data for left of "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data for right of "<<data<<endl;
    root->right = buildTree(root->right);

    return root;

}
//LNR
void preOrder(node *root){

    // Base case
    if(root == NULL){
        return ;
    }

        // LNR - Left node Right
    cout<<root->data<< " ";
    preOrder(root->left);
    preOrder(root->right);
}
int main(){
    node *root =NULL;

    root = buildTree(root);

    cout<<"Inorder Traversal"<<endl;
    preOrder(root);

return 0;
}