#include<bits/stdc++.h>
using namespace std;

void printNumber(int n){

    if(n>0){

        cout<<n<<endl;
        printNumber(n-1);
        // cout<<"eldorado"<<endl;
        printNumber(n-1);
    }

}

//  when a function calling himself more than one time are known as tree recursion

int main(){
    int n=3;
    printNumber(n);

return 0;
}