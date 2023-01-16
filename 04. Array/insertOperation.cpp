#include<bits/stdc++.h>
using namespace std;

void display(int *a,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<endl;
}
int main(){
    int size =8;
    int arr[size]={4,52,6,2,4};

    display(arr,size);
     // insert(index,data)
     int index=3; // index where we have to insert the data
     int data=45;  // data which we have to insert

     for (int i = size; i > index; i--)
     {

        cout<<i<<endl;
        arr[i]=arr[i-1];
     }
        arr[index]=data;
     

    display(arr,size);
     
     


return 0;
}