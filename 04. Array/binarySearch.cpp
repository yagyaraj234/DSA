#include<bits/stdc++.h>
using namespace std;

void display(int *a,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<endl;
}
int binarySearch(int a[],int s,int key){

    int start=a[0],mid;
    int end=s-1;
    while(start<=end){
        
    // mid=(start+end)/2;
    mid=start+(end-start)/2;
    if(key==a[mid])
    return mid;
    else if(key<a[mid])
    end=mid-1;
    else
    start=mid+1;

    }
    return -1;
}
int main(){
    int a[7]={3,4,7,9,12,15,20};

    display(a,7);
   cout<< binarySearch(a,7,123);

return 0;
}
