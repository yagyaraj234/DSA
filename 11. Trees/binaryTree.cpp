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
    cout<<"Enter tha data :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data == -1){
        return NULL;
    }
    cout<<"Enter data for inserting in left"<<data<<endl;
    root->left =buildTree(root->left);
    cout<<"Enter data for inserting in right of"<<data<<endl;
    root->right =buildTree(root->right);
    return root;

} 

int main(){
    node* root =NULL;

    // Creating a tree
    root=buildTree(root);


return 0;
}