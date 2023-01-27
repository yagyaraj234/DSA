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
    head=temp;
}

void displayLinkedList(node* &head){

    node* temp=head;

    if(temp!=NULL){
        displayLinkedList(temp->next);
        cout<<temp->data<<" ";
    }
    
    
}

int count(node* head){
    node* temp=head;
    int count=0;
    while (temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){

    node *temp;
    temp=new node(4);
    node* head=temp;
    node* tail=temp;

    insertAtHead(head,45);
    insertAtHead(head,34);
    insertAtHead(head,32);
    insertAtHead(head,5);
    

    displayLinkedList(head);

    cout<<"\nThe no. of nodes Present in the linked list is : "<<count(head)<<endl;
return 0;
}