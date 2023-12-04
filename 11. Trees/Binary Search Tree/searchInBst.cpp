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

// static bool isElementPresent = false;
bool searchNode(Node* root,int data){

    if(root == NULL){
        return false;
    }

    if(root->data == data){
        return true;
    }
    if(root->data > data){
        searchNode(root->left,data);
    }
    else if(root->data < data){
        searchNode(root->right,data);
    }

    
};

int main(){
    Node* root = NULL;
    root = insertNode(root, 21);
    insertNode(root, 14);
    insertNode(root, 28);
    insertNode(root, 11);
    insertNode(root, 18);
    insertNode(root, 25);
    insertNode(root, 32);
    insertNode(root, 5);
    insertNode(root, 12);
    insertNode(root, 15);
    insertNode(root, 19);
    insertNode(root, 23);
    insertNode(root, 27);
    insertNode(root, 30);
    insertNode(root, 37);
    cout<<root->data<<endl;

    inOrder(root);

    cout<<endl;

    bool isElementPresent =searchNode(root,21);

    if(isElementPresent){
        cout<<"Element present";
    }
    else{
        cout<<"Element not present";
    }


    return 0;
}
