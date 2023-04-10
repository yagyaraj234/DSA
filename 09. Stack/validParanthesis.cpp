#include <bits/stdc++.h>
using namespace std;

bool compare(char a, char b)
{

    if (a == '(' && b == ')')
        return true;
    else if (a == '[' && b == ']')
        return true;
    else if (a == '{' && b == '}')
        return true;

    else
        return false;
}
bool ispar(string x)
{
    // Your code here
    int s = x.size();
    stack<char> st;

    for (int i = 0; i < s; i++)
    {
        if (x[i] == '{' || x[i] == '[' || x[i] == '(')
        {
            st.push(x[i]);
        }
        else
        {
            if (!st.empty())
            {
                if (compare(st.top(), x[i]))
                {
                    st.pop();
                }
                else
                    return false;
            }

            else
            {
                return false;
            }
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}

int main()
{
    string s="{[{}]}";

    if(ispar(s)){
        cout<<"Balanced"<<endl;
    }
    else 
        cout<<"Unbalanced"<<endl;


    return 0;
}