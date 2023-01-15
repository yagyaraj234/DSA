#include<bits/stdc++.h>
using namespace std;

int main(){
    int *arr;

    arr=new int[5];

    // We Can increase the size of an array by creating a new array and assigning the value of first array to second one

    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    cout<<"THe First Array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i];
    }

    cout<<endl;

    int *array =new int[10];

    for (int i = 0; i < 10; i++)
    {
        array[i]=arr[i];  // coping data from first array 
    }

    delete []arr; // deletion of first array
    arr=array; // assigning the name
    array=NULL; // assigning the second array as null to 
    cout<<"The Second Array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
    
    

return 0;
}