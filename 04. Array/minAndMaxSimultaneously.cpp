#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10]={-1,2,5,7,3,8,9,7,4,6};

    int min=a[0];
    int max=a[0];

    for (int i = 0; i < 10; i++)
    {
         if (min > a[i]) {
        min = a[i];
        }
        else if (max < a[i]) {
        max = a[i];
        } 
        
    }
    
    cout<<"Min :"<<min<<endl;
    cout<<"Max :"<<max<<endl;


return 0;
}