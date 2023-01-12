#include<bits/stdc++.h>
using namespace std;

struct rect{
    int length;
    int breadth;
};

int main(){

    struct rect r ={5,6};

    cout<<r.length*r.breadth<<endl;

    struct rect *p = &r;

   int a= p->breadth=40; // to allocate the memory to a structure using pointer
   int b= p->length=40;
    cout<<a*b<<endl;
    cout<<&r<<endl;
 

return 0;
}