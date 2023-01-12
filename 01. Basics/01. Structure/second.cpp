#include<bits/stdc++.h>
using namespace std;

struct user{
    int id;
    string name;
    int marks;
};
int main(){

    struct user student;
    student.id=1;
    student.name="hello";
    student.marks=34;

    cout<<student.id<<endl;
    cout<<student.name<<endl;
    cout<<student.marks<<endl;

    return 0;
}