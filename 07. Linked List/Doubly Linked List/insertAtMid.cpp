#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Traversing The linked List and print data of the node
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

// Inserting at End of Doubly Linked List
void insertAtEnd(node *&head, int d)
{
    node *temp = head;
    node *newNode = new node(d);

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}

// Inserting at Any position of Doubly Linked List
void insertAtMid(node *&head, int d, int pos)
{
    node *temp = head;
    node *newNode = new node(d);
    int i = 0;
    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
int main()
{
    node *temp = new node(5);
    node *head = temp;
    insertAtEnd(head, 25);
    insertAtEnd(head, 35);
    insertAtEnd(head, 45);

    insertAtMid(head, 10, 2);
    insertAtMid(head, 90, 4);
    display(head);

    return 0;
}