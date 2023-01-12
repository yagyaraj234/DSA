#include<bits/stdc++.h>
using namespace std;

// Defining Structure
class rect{
    private:
    int len;
    int bredth;

    public:
// initialise the value of structure
void initialise(int length,int breadth){
    len=length;
    bredth=breadth;
}

// It returns the area of rectangle
int area(){
    int areaRect =len*bredth;
  

   return areaRect;
}


// To changing the length
void changeLen(int length){

    len=length;
}
};

int main(){
    rect r;
    r.initialise(4,55);

   cout<< r.area()<<endl;

   r.changeLen(1);

   cout<< r.area()<<endl;



return 0;
}