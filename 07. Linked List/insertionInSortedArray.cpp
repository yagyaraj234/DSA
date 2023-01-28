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

void insertTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void insert(node *&head, int d)
{
    node *temp = head;
    node* prev=NULL;
    node *newNode = new node(d);
    while (temp != NULL)
    {
        if(head->data>newNode->data){
            newNode->next=head;
            head=newNode;
            break;
        }
        else if (temp->data>newNode->data){
            prev->next=newNode;
            newNode->next=temp;
            break;
        }
        else if(temp->next==NULL){
            temp->next=newNode;
            break;
        }
        prev=temp;
        temp = temp->next;
    }
    
}
int main()
{
    node *node1 = new node(4);
    node *head = node1;
    node *tail = node1;
    insertTail(tail, 5);
    insertTail(tail, 8);
    insertTail(tail, 12);
    display(head);
    insert(head,13);
    display(head);

    return 0;
}