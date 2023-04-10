#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
    
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Stack{

    public:
    node* head;
    int size;

    Stack(int s){
        this->size=s;
        head=NULL; 
    }

    void push(int d){
        node * newNode=new node(d);

        if(size>0){
        if(head==NULL){
            head=newNode;    
        }
        else{

        newNode->next=head;
        head=newNode;
        }
        size--;
        }

        else{
            cout<<"Stack is full"<<endl;
        }

    }

    void pop(){
        node *temp=head;
        if(temp==NULL){
            cout<<"No element present"<<endl;
        }
        else{
            head=head->next;
            temp->next=NULL;
            cout<<temp->data<<" is popped"<<endl;
            delete temp;
        }

        
    }

    void top(){
        if(head==NULL) {
            cout<<"No top element"<<endl;
        }
        else{
            cout<<"top element is : "<<head->data<<endl;
        }
    }

    void isEmpty(){
        if(head==NULL){
            cout<<"Stack is Empty"<<endl;
        }
        else {
            cout<<"Stack is not empty"<<endl;
        }
    }

    int stacksize(){
        node* temp=head;
        int count=1;
        if(head==NULL) return 0;

        else{
        while(temp->next!=NULL){
            count++;
            temp=temp->next;
        }

        return count;
        }
    }

};


int main(){

    Stack st(5);

    st.push(34);
    st.push(23);
    st.push(14);
    st.push(23);
    st.push(4);
    st.pop();
    st.pop();
    st.pop();
    st.top();
    st.isEmpty();
    cout<< st.stacksize();





    

return 0;
}