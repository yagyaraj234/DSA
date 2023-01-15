#include<bits/stdc++.h>
using namespace std;

int main(){
    int n[]={4,5,6};

    int a[5];  // it allocate the memory of 5 integer 

    // a[3]={4};  // it initialise the value at index 3

    // cout<<n[2];


        cout<<"Enter the value of an array"<<endl;

    for(int i=0;i<5;i++){

        cin>>a[i];

    }

    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }



return 0;
}