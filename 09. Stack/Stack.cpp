#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
            cout << "Stack underflow" << endl;
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool empty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty" << endl;
            return 1;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return 0;
        }
    }
};

int main()
{

    Stack st(5);
    st.push(5);
    st.push(32);
    st.push(21);

    for (int i = 0; i < 3; i++)
    {
        cout << st.peek() << " ";
        st.pop();
    }
    cout << endl;

    cout << st.empty() << endl;

    return 0;
}