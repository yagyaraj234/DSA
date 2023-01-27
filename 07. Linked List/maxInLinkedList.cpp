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
int nodesSum(node* head){
    node* temp =head;
    int sum=0;
    while (temp!=NULL)
    {
        sum+=temp->data;
        temp=temp->next;
    }

    return sum;
}
int maxEl(node* head){
    node* temp=head;
    int max=0;
    while (temp!=NULL)
    {
        if(max<temp->data){
            max=temp->data;
        }

        temp=temp->next;
    }
    return max;
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

    cout<<"The sum of Nodes is : "<<nodesSum(head)<<endl;
    cout<<"The Max element in Linked List is : "<<maxEl(head)<<endl;
return 0;
}