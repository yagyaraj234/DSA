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

void insertAtHead(node* &head,int d){

    node* temp= new node(d);
    temp->next=head;

    cout<<temp->data<<endl;
    cout<<temp->next->data<<endl;
}

int main(){

    node *temp;
    temp=new node(4);
    node* head=temp;
    node* tail=temp;

    insertAtHead(tail,45);
return 0;
}