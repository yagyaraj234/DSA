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

Node* findMin(Node* root){
    if (root == NULL) {
        return NULL; 
    }

    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

Node* deleteNode(Node* root,int data){
    if(root->data == NULL){
        return root;
    }
    else if(root->data > data){
        root->left = deleteNode(root->left,data);
    }
    else if(root->data < data){
        root->right = deleteNode(root->right,data);
    }
    else{

        // CASE 1 : With NO Child
        if(root->left == NULL && root->right == NULL){
            delete root;
            root= NULL;
        }
        // CASE 2 : With one Child
        // If right  child present
        else if(root->left == NULL){
            Node*temp =root;
            root=root->right;
            delete temp;
        } 
        // If left child present
         else if(root->right == NULL){
            Node*temp =root;
            root=root->left;
            delete temp;
        }

        // CASE : 3 If Two Child Present
        else{
            Node* temp= findMin(root->left);
            root->data = temp->data;
            root->left = deleteNode(root->left,temp->data);
        }
    }

    return root;
}

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


    deleteNode(root,28);
    inOrder(root);

    return 0;
}
