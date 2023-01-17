#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[11]={4,5,6,7,8,8,9,10,11,11,11};
    int lastDuplicate=0;

    for (int i = 0; i < 11; i++)
    {
        if(a[i]==a[i+1] && lastDuplicate!=a[i]){
            cout<<a[i]<<" ";
            lastDuplicate=a[i];

        }
    }
    



return 0;
}