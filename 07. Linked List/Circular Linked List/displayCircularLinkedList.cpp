#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* head;

    node(int data){
        this->data=data;
        this->next=NULL;
        this->head=head;
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
int main(){
    node* temp=new node(5);
    node* temp1=new node(2);
    node* temp2=new node(4);
    node* temp3=new node(6);
    node* temp4=new node(8);

    temp->next=temp1;
    temp1->next=temp2;
    temp2->next=temp3;
    temp3->next=temp4;
    temp4->next=temp;

    node* head=temp;
    display(head);

return 0;
}