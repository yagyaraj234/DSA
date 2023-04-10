#include <bits/stdc++.h>
using namespace std;
void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
void pushAtBottom(stack<int> &s, int el)
{
    if (s.empty())
    {
        s.push(el);
        return;
    }

    // storing the element
    int d = s.top();
    s.pop();

    // recursive call
    pushAtBottom(s, el);
    s.push(d);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }

    // store top element

    int num = st.top();
    st.pop();

    // recursive call
    reverseStack(st);
    pushAtBottom(st, num);
}

int main()
{
    stack<int> st;

    st.push(48);
    st.push(42);
    st.push(12);
    st.push(54);
    st.push(76);
    st.push(2);
    cout << "Before Reversing" << endl;
    printStack(st);

    reverseStack(st);

    cout << endl
         << "After Reversing" << endl;
    printStack(st);

    return 0;
}