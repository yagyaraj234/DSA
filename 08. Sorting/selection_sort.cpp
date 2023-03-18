#include<bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n){

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }

    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    int a[5]={1,2,52,51,0};

    selectionSort(a,5);

return 0;
}