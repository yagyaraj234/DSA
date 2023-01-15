#include<bits/stdc++.h>
using namespace std;

// In indirect recursion there may be more than one function have calling themselves one another in circular
void add(int a);
void sum(int b){
    if(b>0){
        cout<<b<<endl;
        add(b-1);
    }
}
void add(int a){
    if(a>1){

        cout<<a<<endl;
        sum(a/2);    
    }
    // return addd;
}

int main(){
    
    int a=20;

    sum(a);

return 0;
}