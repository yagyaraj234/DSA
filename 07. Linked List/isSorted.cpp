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
int isSorted(node *&head)
{

    node *temp = head;
    node *temp2 = head;

    int x = -32768;

            while(temp!=NULL)
        {
            if(temp->data < x)
                return 0;
            x=temp->data;
            temp=temp->next;
        }
        return 1;
}
int main()
{

    node *temp = new node(5);
    node *head = temp;
    node *tail = temp;
    insert(tail, 8);
    insert(tail, 15);
    insert(tail, 53);
    insert(tail, 1435);
    insert(tail, 185);
    display(head);

   cout<< isSorted(head);

    // display(head);

    return 0;
}