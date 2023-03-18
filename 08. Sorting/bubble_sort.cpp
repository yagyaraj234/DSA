#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int a[],int n){

    for(int i=0;i<n-1;i++){

        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

}

int main(){
    int a[5]={32,12,41,52,11};

    bubbleSort(a,5);

return 0;
}