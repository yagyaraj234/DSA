#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;

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

// Delete at specific position
void deleteNode(node* &head,int pos){
    node * temp=head;
    node* prev=NULL;
    int i=0;
    while (i!=pos-1)
    {
        prev=temp;
        temp=temp->next;
        i++;
    }   
    prev->next=temp->next;
    delete temp;

}

// Delete at Front 

void deleteFront(node* &head){
    node* temp=head;
    while (temp->next!=head)
    {
        temp=temp->next;
    }

    temp->next=head->next;
    head=head->next;
    // delete temp;   
}

// Delete From end
void deleteEnd(node* &head){
    node* temp= head;
    node* prev=NULL;
    while (temp->next!=head)
    {
        prev=temp;
        temp=temp->next;
    }
    prev->next=head;
    delete temp;
    
}
int main(){
    node* temp=new node(5);
    node* temp1=new node(6);
    node* temp2=new node(5);
    node* temp3=new node(7);
    node* temp4=new node(8);
    temp->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp;
    node* head=temp;
    display(head);
    deleteNode(head,3);
    display(head);
    deleteFront(head);
    display(head);
    deleteEnd(head);
    display(head);


return 0;
}