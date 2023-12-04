#include<bits/stdc++.h>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;

    void Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;

        cout<<data<<endl;
    }
}

void insertInBSTree(node* root,int data){
    Node* insertData = new Node(data);

    // cout<<insertData
}
int main(){
    Node* root=NULL;
    insertInBSTree(root,5);
}