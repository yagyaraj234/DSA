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

void insert(node* &tail,int data){
    
    node* temp=new node(data);

    tail->next=temp;
    tail=tail->next;

}

void display(node* &head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteNode(node* &head,int p){ // through node data
    
    node* temp=head;
    while (temp!=NULL)
    {
        if(temp->next->data==p){ 
            temp->next=temp->next->next;
            delete temp->next;
            break;
        }
        else if(temp->data==p){
            head=temp->next;
            delete temp;
            break;
        }
        temp=temp->next;
    }
    
    
}

int main(){

    node* temp=new node(5);
    node* head=temp;
    node* tail=temp;

    display(head);

    insert(tail,25);
    insert(tail,15);
    insert(tail,53);
    insert(tail,115);
    insert(tail,85);
    
    display(head);
    deleteNode(head,85);

    display(head);
return 0;
}