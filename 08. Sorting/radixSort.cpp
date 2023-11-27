#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countingSort(int arr[],int size,int it){
   
    int count[10]={0};
    int output[size];

  
    // Mapping values into count array
    for(int i=0;i<size;i++){
        count[(arr[i]/it)%10]++;
    }

    for(int i=1;i<10;i++){
        count[i]+=count[i-1];
    }
    

    for(int i=size-1;i>=0;i--){
        output[count[(arr[i]/it)%10]-1]=arr[i];
        count[(arr[i]/it)%10]--;
    
    }
    

    for(int i=0;i<size;i++){
        arr[i]=output[i];
    }
}
int getMax(int arr[],int size){
    int max=0;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    return max;
}

void radixSort(int arr[],int size){


    int max = getMax(arr,size);

    // Radix Sort implementation

    for(int it=1;max/it>0;it*=10){
        countingSort(arr,size,it);
    }


}

int main(){
    int arr[10]={2,64,1,114,686,25,46,2,123,32};

    cout<<"BEFORE"<<endl;
    printArray(arr,10);
    radixSort(arr,10);
    cout<<"AFTER"<<endl;
    printArray(arr,10);



return 0;
}