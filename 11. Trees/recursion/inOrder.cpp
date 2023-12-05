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

    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout<<"Enter the left node of "<<data<<endl;
    root->left= buildTree(root->left);
    cout<<"Enter the right node of "<<data<<endl;
    root->right= buildTree(root->right);

}

void inOrder(node* temp){

    // stack<node*> s;
    // node* curr = root; 
    // while (curr != NULL || s.empty() == false) {
    //     while (curr != NULL) {
    //         s.push(curr);
    //         curr = curr->left;
    //     }
    //     curr = s.top();
    //     s.pop();
    //     cout << curr->data << " ";
    //     curr = curr->right;

    stack<node*> s;
    node * root = temp;
    while(root!= NULL || s.empty() == false){
        while(root != NULL){
            s.push(root);
            root= root->left;
        }
        root= s.top();
        s.pop();
        cout<<root->data<<" ";
        root=root->right; 
    // }
    }
}
int main(){
    node* root= NULL;
    root = buildTree(root);

    cout<<"Inorder"<<endl;
    inOrder(root);
return 0;
}