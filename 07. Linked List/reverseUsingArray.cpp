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
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert(node* &tail,int d){
    node *temp= new node(d);
    tail->next=temp;
    tail=temp;   
}
void reverse(node* &head){

    node* temp=head;
    node* temp2=head;
    int a[5];
    int i=0;
    for (i; i < 5 ; i++)
    {
        a[i]=temp->data;   
        temp=temp->next;
    }
    for (i=4; i >= 0;i--)
    {
        temp2->data=a[i];
        temp2=temp2->next;
    }   

}
int main(){
    node* temp=new node(5);
    node* head=temp;
    node* tail=temp;
    insert(tail,3);
    insert(tail,13);
    insert(tail,23);
    insert(tail,33);
    display(head);

    reverse(head);
    display(head);

return 0;
}