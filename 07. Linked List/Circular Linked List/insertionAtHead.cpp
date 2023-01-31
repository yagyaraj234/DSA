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
void display(node* &head){
    node* temp=head;
    do
    {   
        cout<<temp->data<<" ";
        temp=temp->next;
    } while (temp!=head);
    
    cout<<endl;
}

void insertAtHead(node* &head,int d){
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }
    node* newNode=new node(d);

    temp->next=newNode;
    newNode->next=head;
    head=temp;
    
    
}
int main(){
    node* temp=new node(23);
    node *head=temp;

    insertAtHead(head,5);
    insertAtHead(head,3);
    insertAtHead(head,13);

    display(head);

return 0;
}