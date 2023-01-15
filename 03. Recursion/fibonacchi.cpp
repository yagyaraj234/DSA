#include<bits/stdc++.h>
using namespace std;

int fib(int n){
    int s;
    if(n<=1){
        return n;
    }
    else
        s= fib(n-2)+fib(n-1);
        // cout<<s<<endl;
        return s;
}

// int fib(int n){

//     for (int i = 0; i >= n; i++)
//     {
//         /* code */
//     }
    
// }
int main(){
    int n;

    n=fib(6);

    cout<<n;

return 0;
}