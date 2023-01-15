#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]; // when we declare the array of size at compile time



    int n;
    // cin>>n;  // when we declare the size of an array at run time

    int b[n];


    // Both array will be allocate the memory inside the stack



    // Creation of an array and allocate a memory in heap


    int arr[5];
    int *p;  // this pointer act as a name of an array

    p=new int[5];  // new is a operator to create a memory in heap

    // Assign the element of an array which was created inside heap
    for (int i = 0; i < 5; i++)
    {
        cin>>p[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<p[i]<<"  ";
    }
    



    delete []p; // Deallocation of memory in a heap



return 0;
}