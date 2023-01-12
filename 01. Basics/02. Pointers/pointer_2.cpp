#include<bits/stdc++.h>
using namespace std;

int main(){

    // To allocate a memory in a heap
    int *p = new int[5];

    cout<<&p;  /// return the address of memory in a heap

    int arr[5]={6,32,26,2,6};

    int b=arr[2];
    cout<<b;


return 0;
}