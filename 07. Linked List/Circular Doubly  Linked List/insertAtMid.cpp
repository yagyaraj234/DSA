#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};

void display(node *&head)
{
    node *p = head;

    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);

    cout << endl;
}

void insertAtHead(node *&head, int d)
{
    node *temp = head;
    node *newNode = new node(d);

    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head->prev = newNode;
    newNode->prev = temp;
    head = newNode;
    
}

void insertAtMid(node* &head,int d,int pos){
    node* p=head;
    int i=0;
    while (i<pos-1)
    {
        i++;
        p=p->next;
    }
    node* newNode=new node(d);
    newNode->next=p->next;
    p->next=newNode;
    newNode->prev=p;
    newNode->next->prev=newNode;
    

}

int main()
{

    node *temp = new node(5);
    temp->next=temp;
    temp->prev=temp;

    node *head = temp;

    insertAtHead(head, 4);    
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    insertAtHead(head, 1);
    cout<<"Insertion At Head"<<endl;
    display(head);
    insertAtMid(head,9,1);
    display(head);


    return 0;
}