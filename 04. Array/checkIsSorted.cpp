#include<bits/stdc++.h>
using namespace std;

int isSorted(int *a,int s){

    int start=a[0];

   for (int i = 0; i < s; i++)
   {
    if(start>a[i]){

        return 0;

    }
   }
   
   return 1;
    
}

int main(){
    
    int arr[5]={1,2,3,4,5};

    cout<<isSorted(arr,5);

return 0;
}