#include<bits/stdc++.h>
using namespace std;

void display(int *a,int s){
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;    
}

void reverseArray(int *a,int size){

    int s=0;
    int e=size-1;
    while (s<=e)
    {
        swap(a[s++],a[e--]);
    }    
}

void leftShift(int *a,int s){

    for (int i = 0; i < s; i++)
    {
        
    }
    
}

int main(){
    int a[5]={4,6,7,8,9};  

    display(a,5);
    reverseArray(a,5);
    display(a,5);

return 0;
}