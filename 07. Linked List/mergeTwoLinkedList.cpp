#include<bits/stdc++.h>
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

void merge(node* &head,node* &head1){
    node* temp=head;
    while (temp!=NULL)
    {
        while(head1!=NULL){
            if(temp->data<head1->data && head1->data<temp->next->data){
                temp->next=head1;
                head1->next=temp->next->next;
            }

        }
    }
    
}
int main(){

    node* temp = new node(15);
    node* temp1 = new node(46);

    node* head=temp;
    node* tail=temp;
    node* head1=temp1;
    node* tail1=temp1;

    insert(head,12);
    insert(head,9);
    insert(head,4);
    insert(head1,14);
    insert(head1,11);
    insert(head1,8);
    display(head);
    display(head1);
    

    merge(head,head1);

    display(head);

return 0;
}