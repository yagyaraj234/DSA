#include<bits/stdc++.h>
using namespace std;

int sumOfArray(int *a){
    int sum;
    int len =sizeof(a)-1;

    for (int  i = 0; i< len; i++)
    {
        sum+=a[i];
    }
    
    return sum;
}
int main(){
    int a[5]={59,359,539,39,3};

    cout<<sumOfArray(a)<<endl;


return 0;
}   