#include<bits/stdc++.h>
using namespace std;
void explain_us(){
    // In unordered_set every element is  unique 

    unordered_set<int> ms;  // declaration

    // Lower and upper bound does not work

    ms.insert(4);
    ms.insert(5);
    ms.insert(8);
    ms.insert(1);


    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;

    // rest functions are same as set Container
}

int main(){
    explain_us();

return 0;
}