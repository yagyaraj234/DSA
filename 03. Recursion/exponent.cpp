#include<bits/stdc++.h>
using namespace std;

int expo(int a,int b)
{
    if(b==0){
        return 1;
    }
    else
        return expo(a,b-1)*a;
}


// Second one is better way to save the memory
int pow(int a,int b){

    if(b==0){
        return 1;
    }
    if(b%2==0){
        return pow(a*a,b/2);
    }

    else
    return a*pow(a*a,(b-1)/2);
}

int main(){
    int a;

    a=expo(5,4);

    cout<<a<<endl;

    cout<<pow(5,5);

return 0;
}