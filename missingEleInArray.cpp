#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={1,2,3,4,5,6,8,9,10,11}; // Sorted array
    int sum=0,n=0;
    for (int i = 0; i < 10; i++)
    {
        sum+=a[i];
        if(i==10-1){
            n=a[i];
        }
    }
    
    cout<<"Sum :"<<sum<<endl;
    cout<<"Last Element : "<<n<<endl;

    int s=n*(n+1)/2;

    cout<<"Missing No :\n"<<s-sum<<endl;

    // Finding missing no throught indices

    int b[8]={4,5,7,8,9,10,11,12};


    int diff=b[0]-0;
    cout<<"Diff : "<<diff<<endl;

    for (int i = 0; i < 8; i++)
    {
        if(b[i]-i!=diff){
            cout<<"Missing No:  "<<i+diff<<endl;
            diff++;
        }
    }
    
    
    


    
    
    

return 0;
}