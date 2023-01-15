#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else
    return fact(n-1)*n;
}


int main(){
    int n;

    n=fact(5);

    cout<<n;

return 0;
}