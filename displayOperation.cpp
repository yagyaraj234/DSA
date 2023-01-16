#include<bits/stdc++.h>
using namespace std;


void display(int *a,int size){

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int *a;
    int size;
    cin>>size;
    a=new int[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    display(a,size);
    

return 0;
}