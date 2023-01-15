#include<bits/stdc++.h>
using namespace std;

            // Nested Recursion 
// recursive function will pass as aparameter of function in called nested recursion   
// recursion inside recursion


int fun(int n){

    if(n>100){
        return n-10;
    }

    else
        return fun(fun(n+11));
}

int main(){
    int a;

    a= fun(96);

    cout<<a<<endl;


return 0;
}