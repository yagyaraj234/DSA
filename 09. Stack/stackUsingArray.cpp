#include <bits/stdc++.h>
using namespace std;

class Stack{

public:
int *arr;
int size;
int top;

// Initailizing the stack

Stack(int s){
  this->size=s;
  arr = new int[size];
  top=-1;
}
 // Push the element
    
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
          cout<<element<<" is pushed on Stack"<<endl;
        }
      else{
        cout<<"Stack is Overflow"<<endl;
      }
    }
    
    // Popping the element
    
    void pop(){
        if(top>=0){
            cout<<arr[top]<<" is removed from the top of the stack"<<endl;
          
            top--;
        }
        else cout<<"Stack is underflow"<<endl;
    }
    
    // is empty
    void isEmpty(){
        if(top==-1){
            cout<<"Stack is Empty"<<endl;
        }
        else cout<<"Stack is not Empty"<<endl;
    }
    
    // To check the peek element of the  stack
    
    int peek(){
        if(top>=0){
            return arr[top];
        }
        
        else cout<<"No element present in the stack"<<endl;
    }
    
    //  Top element of the stack
    // int ttop(){
    //     if(top>=0){
    //     return arr[top];
    //     }
        
    // }
    
    // to check the stack is full or nor
    
    bool isFull(){
        if(top==size) return true;
        
        else return false;
    }
  
};


int main() {

    Stack st(5);
    st.push(3);
    st.push(33);
    st.push(32);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.isEmpty();
    if(st.isFull()==0){
        cout<<"Stack is Not full"<<endl;
    }
    else cout<<"Stack is Full"<<endl;

  return 0;

}