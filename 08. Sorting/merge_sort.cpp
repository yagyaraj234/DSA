#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &a,int s,int mid,int e){
    vector<int>temp;
    int l=s;
    int r=mid+1;

    while(l<=mid && r<=e){
        if(a[l]<=a[r]){
            temp.push_back(a[l]);
            l++;
        }
        else{
            temp.push_back(a[r]);
            r++;
        }
    }

    while(l<=mid){
        temp.push_back(a[l]);
        l++;
    }
    while(r<=e){
        temp.push_back(a[r]);
        r++;
    }

    for(int i=s;i<=e;i++){
        a[i]=temp[i-s];
    }
}

void mergeSort(vector<int> &a,int s,int e){
    if(s>=e) return;

    int mid=(s+e)/2;

    mergeSort(a,s,mid);
    mergeSort(a,mid+1,e);

    merge(a,s,mid,e);

}

int main(){
    vector<int> arr={1,52,123,141,421,41};
    int n=6;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}