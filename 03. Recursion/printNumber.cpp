#include<bits/stdc++.h>
using namespace std;

void num(int n){

    if(n>0){
        num(n-1);
        cout<<n<<endl;
    }
    
}

int main(){
    int n=10;
    num(n);


return 0;
}