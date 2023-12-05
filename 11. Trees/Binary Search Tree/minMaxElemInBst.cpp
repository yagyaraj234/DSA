#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* insertNode(Node* root, int data){
    if (root == NULL){
        // root = 
        return new Node(data);
    }

    if (root->data > data){
       root->left= insertNode(root->left, data);
    }
    else{
      root->right=  insertNode(root->right, data);
    }

    return root;
}


void inOrder(Node *root){
    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

Node* minEl(Node* root){

    if(root== NULL){
        return root;
    }
    while(root->left != NULL){
        root=root->left;
    }

    return root;
}
Node* maxEl(Node* root){
    if(root== NULL){
        return root;
    }
    while(root->right != NULL){
        root=root->right;
    }

    return root;
}

int main(){
    Node* root = NULL;
    root = insertNode(root, 25);
    insertNode(root, 23);
    insertNode(root, 27);
    insertNode(root, 17);
    insertNode(root, 19);
    insertNode(root, 29);

    inOrder(root);

    Node* min = minEl(root);

    cout<<endl<<"min ele"<<min->data<<endl;

    Node* max = maxEl(root);

    cout<<endl<<"max ele"<<max->data<<endl;

    return 0;
}
