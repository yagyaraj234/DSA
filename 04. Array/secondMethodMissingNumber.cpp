#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={9,7,10,2,3,5,6,12,1,13};

    int b[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < 10; i++)
    {
        b[a[i]]++;
        
        
    }
    
    for (int i = 0; i < 12; i++)
    {
        // cout<<b[i]<<" ";
        if(b[i]==0){
            b[i]=i;
        }
        cout<<b[i]<<" ";
    }
    

return 0;
}