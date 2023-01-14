#include<bits/stdc++.h>
using namespace std;

int sum(int *a,int l){

    int s=0;
    if(l>0){            // Base Conditions
        for (int i = 0; i < l; i++)
        {
            s+=a[i];
        }
        sum(a,l-1);  // Recursive Call
    }
    return s;
}

int main(){
    
    int arr[5]={4,5,6,7,2};
    cout<<sum(arr,5);

return 0;
}