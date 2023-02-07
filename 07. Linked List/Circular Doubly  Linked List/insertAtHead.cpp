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
    // head->prev=newNode;
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
int main()
{

    node *temp = new node(5);
    node *temp1 = new node(6);

    node *head = temp;

    temp->next = temp1;
    temp1->next = head;
    temp1->prev = temp;
    head->prev = temp1;

    insertAtHead(head, 4);

    display(head);

    return 0;
}