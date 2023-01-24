#include<bits/stdc++.h>
using namespace std;


// structure of node
class node{
    public:
    int data;
    node *next;

    //Constructor
    node(int data){
        this->data=data;
        this->next=NULL;
    }

    // Destructor

};
int main(){

    node *temp;
    temp=new node(6);
    node *tempdata = new node(5);

    cout<<temp->data<<endl;
    cout<<tempdata->data<<endl;
    

return 0;
}