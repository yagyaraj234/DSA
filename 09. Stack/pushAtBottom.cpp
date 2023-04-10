#include<bits/stdc++.h>
using namespace std;

void printStack(stack<int> s){
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}

void pushAtBottom(stack<int> &s,int el){
    if(s.empty()) {
        s.push(el);
        cout<<el<<" - Pushed at bottom"<<endl;
        return;
    }

    // storing the element
    int d=s.top();
    s.pop();


    // recursive call
    pushAtBottom(s,el);
    s.push(d);

}

int main(){

    stack<int> st;
    st.push(43);
    st.push(3);
    st.push(34);
    st.push(13);

    pushAtBottom(st,45);
    printStack(st);
    

return 0;
}