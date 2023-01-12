#include<bits/stdc++.h>
using namespace std;

struct rect
{
    int len;
    int breadth;
};

// void areaOfRect(struct rect a){   // call by value
void areaOfRect(struct rect &a){  // call by reference

    
    cout<<a.len*a.breadth<<endl;

    a.len =45;
    a.breadth=2;
    cout<<a.len*a.breadth<<endl;



}


int main(){

    struct rect r={4,5};

    cout<<r.len<<" "<<r.breadth<<endl;

    areaOfRect(r);
    cout<<r.len<<" "<<r.breadth<<endl;
    

return 0;
}