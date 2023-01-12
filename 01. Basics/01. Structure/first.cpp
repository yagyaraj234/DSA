#include<iostream>
using namespace std;

// Definfing the  Structute

struct student{
    char name[20];
    int rollNumber;
    int age;
};

int main(){
    // declatration of structure

    struct student p;

    p.rollNumber =827523;
    // p.name ="r";
    p.age =34;

    // initialization of struct
    // struct student  p = {"rahul",287829};


    // ("name","rollNumber");
    cout<<p.age<<" "<<p.rollNumber<<endl;
    cout<<"Hello World"<<endl;

    return 0;

}