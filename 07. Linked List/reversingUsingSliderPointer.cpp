#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    // Constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void insert(node* &head,int d){
     node* temp=new node(d);
     temp->next=head;
     head=temp;
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

void reverse(node* &head){

    node* temp=head;
    node* temp1=NULL;
    node* temp2=NULL;
    while (temp!=NULL)
    {
        temp2=temp1;
        temp1=temp;
        temp=temp->next;
        temp1->next=temp2;
    }

    head=temp1;
    

}
    int main(){
    node * temp=new node(5);
    node* head=temp;
    node* tail=temp;
    insert(head,4);
    insert(head,8);
    insert(head,32);
    insert(head,81);
    insert(head,43);
    insert(head,82);
    display(head);

    reverse(head);
    display(head);

return 0;
}