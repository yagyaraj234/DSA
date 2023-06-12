#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int n=3;
    int m=3;

    int top=0;
    int bottom =n-1;
    int left=n-1;
    int right=m-1;

    int a[n*m];
    int p=0;

    while(p<n*m){
        for(int i=0;i<m;i++){
            a[p]=arr[top][i];
            p++;
        }
        top++;
        int i=top;
        while(i<right){
            a[p]=arr[i][right];
            i++;
            p++;
        }
        // i--;
        right--;
        int j=right;
        while(j!=left){
            a[p]=a[i][j];
            p++;
            j--;
        }
        int k=left;
        while(k!=top){

        }
        // while(right)
    }

return 0;
}