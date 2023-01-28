#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
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

int main()
{
    node* temp = new node(5);
    node* temp1 = new node(46);

    node* head=temp;
    node* tail=temp;
    node* head1=temp1;
    node* tail1=temp1;

    insert(head,43);
    insert(head,3);
    insert(head,4);
    insert(head1,32);
    insert(head1,56);
    display(head);
    display(head1);
    node* newHead=head;
    while (newHead->next!=NULL)
    {
       newHead=newHead->next;
    }

    newHead->next=head1;
    while (newHead->next!=NULL)
    {
        newHead=newHead->next;
    }

    newHead=NULL;
    display(head);
    return 0;
}