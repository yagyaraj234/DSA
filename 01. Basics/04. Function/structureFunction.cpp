#include<bits/stdc++.h>
using namespace std;

// Defining Structure
struct rect{
    int len;
    int bredth;
};

// initialise the value of structure
void initialise(struct rect *r,int length,int breadth){
    r->len=length;
    r->bredth=breadth;
}

// It returns the area of rectangle
int area(struct rect *r){
    int areaRect =r->len*r->bredth;
  

   return areaRect;
}


// To changing the length
void changeLen(struct rect *r,int length){

    r->len=length;
}

int main(){
    struct rect r;

    initialise(&r,4,5);

   cout<< area(&r)<<endl;

   changeLen(&r,8);

   cout<<area(&r)<<endl;



return 0;
}