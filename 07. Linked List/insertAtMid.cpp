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

void display(node* &head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(node* &head, int data)
{
    // node* temp=head;
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertTail(node* &tail, int data)
{
    // node* temp=head;
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtMid(node* &head,int data,int pos){

    node* temp=head;
    node* newNode=new node(data);
    cout<<newNode->data<<endl;
    int i=0;
    while (pos-1>i)
    {   
        temp=temp->next;
        i++;
    }
        newNode->next=temp->next;
        temp->next=newNode;
}

int main()
{
    node *node1 = new node(54);
    node *head = node1;
    node *tail = node1;
    insertHead(head, 23);
    insertHead(head, 13);
    insertTail(tail, 45);
    insertTail(tail, 5);
    insertTail(tail, 35);
    insertTail(tail, 35);
    insertTail(tail, 35);
    insertTail(tail, 35);
    insertTail(tail, 35);
    display(head);

    insertAtMid(head,345,4);
    display(head);

    return 0;
}