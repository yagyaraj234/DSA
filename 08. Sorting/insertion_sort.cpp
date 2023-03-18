#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main(){
    int a[5]={13,4,22,6,2};
    insertionSort(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }

return 0;
}

