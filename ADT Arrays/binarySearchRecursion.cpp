#include<bits/stdc++.h>
using namespace std;
void display(int *a,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<endl;
}

int binarySearch(int a[],int start,int size,int key){
    int mid;
    if(start<=size-1){
        mid=start+(size-start-1)/2;
        if(key==a[mid]){
            return mid;
        }
        else if(key>a[mid]){
            return binarySearch(a,mid+1,size,key);

        }
        else
        return binarySearch(a,start,mid-1,key);
    }

    return -1;
}

int main(){
     int a[7]={3,4,7,9,12,15,20};

    display(a,7);
   cout<<"Index: "<< binarySearch(a,0,6,3);


return 0;
}