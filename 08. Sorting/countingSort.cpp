#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


void countingSort(int arr[],int size,int max){

    int b[size];
    int c[max+1]={0};

    for(int i=0;i<size;i++){
        c[arr[i]]++;
    }

    // Cummumlative sum
        for (int i = 1; i <= max; i++) {
        c[i] += c[i - 1];
    }
    // printArray(c,max);

    // sorting the array
    cout<<size<<endl;

    for(int i=size-1;i>=0;i--){
        b[c[arr[i]]-1] = arr[i];
        
        // c[arr[i]]--;
    }

    cout<<"size : "<<sizeof(b)/sizeof(b[0])<<endl;

    printArray(b,size);

    
}

int main(){
    
    int arr[] ={1,2,5,35,43,63,5,3,25,5,5,67,5,7,46,34,21,23,46,66,54,58};

    int size = sizeof(arr)/sizeof(arr[0]);
    // cout<<size<<" ";

    // for maximum value
    int maximum=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
    }


    countingSort(arr,size,maximum);

return 0;
}