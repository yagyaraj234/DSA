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
void insert(node *&tail, int data)
{

    node *temp = new node(data);

    tail->next = temp;
    tail = tail->next;
}

void display(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void removeDuplicates(node *head){
    node *temp=head->next;
    node *prev=head;
    while (temp!=NULL)
    {
        if(temp->data!=prev->data){
            
        prev=temp;
        temp=temp->next;
        }
          else{
            prev->next=temp->next;
            delete temp;
            temp=prev->next;
          }  
            
            
    }
    
}
int main(){

    node *temp=new node(4);
    node *tail = temp;
    node *head=temp;
    insert(tail, 8);
    insert(tail, 15);
    insert(tail, 15);
    insert(tail, 15);
    insert(tail, 53);
    insert(tail, 53);
    insert(tail, 185);
    display(head);
    removeDuplicates(head);
    display(head);
return 0;
}