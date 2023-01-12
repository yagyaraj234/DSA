#include<bits/stdc++.h>
using namespace std;



// Call By Value - in  this the actual value of arguments doesn't change 
void swapNum(float a,float b){
    cout<<"Call by Value"<<endl;
    cout<<"Before Swapping :"<< a<<" "<<b<<endl;

    cout<<"Method One : "<<a+b-a<<" "<<b+a-b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Method Two : "<<a<<" "<<b<<endl<<endl;
}


// Call By Address - in this the actual value of arguments change


void swapNum2(int *a,int *b){
    cout<<"Call by Address"<<endl;
    cout<<"Before Swapping :"<< *a<<" "<<*b<<endl;

    *a=(*a)*(*b);
    *b=(*a)/(*b);
    *a=(*a)/(*b);
    cout<<"Method Two : "<<*a<<" "<<*b<<endl<<endl;
}

// Call by Referance -
void swapNum3(int &a,int &b){

    cout<<"Call by Value"<<endl;
    cout<<"Before Swapping :"<< a<<" "<<b<<endl;
    cout<<"Method One : "<<a+b-a<<" "<<b+a-b<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Method Two : "<<a<<" "<<b<<endl<<endl;

}

int main(){

    int a=5;
    int b=6;
    swapNum(5.4,6);  // Call By Value
    swapNum2(&a,&b); // Call by Address
    swapNum3(a,b); // Call refernce
return 0;
}