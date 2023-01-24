#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtTail(node* &tail,int d){

    node* temp= new node(d);
    tail->next=temp;
    tail=tail->next;
}

int main(){

    node *temp;
    temp=new node(6);
    // node *tempdata = new node(5);
    node* head=temp;
    node* tail=temp;

    insertAtTail(tail,65);
    cout<<temp->data<<endl;
    // cout<<tempdata->data<<endl;
return 0;
}