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

void insertAtHead(node *&head, int d)
{

    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void displayLinkedList(node *&head)
{

    node *temp = head;

    if (temp != NULL)
    {
        displayLinkedList(temp->next);
        cout << temp->data << " ";
        // cout<<endl;
    }
    // cout<<endl;
}

bool changeNode(node* head,int key){
    node* temp=head;
    node* prev=NULL;

    while (temp!=NULL)
    {
        if(temp->data==key){
            prev->next=temp->next;
            temp->next=head;
            head=temp;
            return head;
        }
        prev=temp;
        temp=temp->next;
    }   
    return 0;
}

int main()
{

    node *temp;
    temp = new node(4);
    node *head = temp;
    node *tail = temp;

    insertAtHead(head, 45);
    insertAtHead(head, 34);
    insertAtHead(head, 32);
    insertAtHead(head, 5);

    displayLinkedList(head);

    bool ans=changeNode(head,3);
    if(ans==false){
    cout<<"Not Found"<<endl;
   }
   else{
    cout<<"Found"<<endl;
   }
    return 0;
}