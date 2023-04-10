#include<bits/stdc++.h>
using namespace std;

void findMiddle(stack<int> s,int count,int size){

    
    if(count==size/2){
        cout<<s.top();
        // return s.top();
        return;
    }

    // storing the element

    int el=s.top();
    s.pop();

    // Recursive call

    findMiddle(s,count+1,size);

    s.push(el);



}

int main(){
    stack<int> s;
    s.push(5);
    s.push(2);
    s.push(52);
    s.push(76);
    s.push(32);
    s.push(32);

    int count=0;
    // cout<<findMiddle(s,count,5);
    findMiddle(s,count,5);

return 0;
}