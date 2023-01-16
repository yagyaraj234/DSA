#include<bits/stdc++.h>
using namespace std;

void display(int *a,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
}
void input(int *a,int size){

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
}

int linearSearch(int *a,int s,int value){
    for (int i = 0; i < s; i++)
    {
        if(a[i]==value)
          return i;      
    }
    
}

int main(){

    int value=5;
    int s;
    cout<<"Enter the size of an array : ";
    cin>>s;
    int arr[s];
    cout<<"Input the array"<<endl;
    input(arr,s);
  cout<<  linearSearch(arr,s,value);


return 0;
}
