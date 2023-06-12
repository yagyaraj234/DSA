#include<bits/stdc++.h>
using namespace std;

void explain_deque(){

    deque<int> dq;

    

    dq.push_back(5);
    dq.emplace_back(2); // Add element at last of the deque

    dq.push_front(34);
    dq.emplace_front(32); // Add element at the stating of the deque

    dq.pop_back();          // Removing element from back
    dq.pop_front();         // Removing element from fornt

    dq.front();         // it gives the first element of the deque
    dq.back();         // it gives the last element of the deque


    // all other same function like vector we can use here
    // begin(), end(), rbegin(), rend(), size(), copy(), erase(), insert(), clearsize(), swap()

}

int main(){
    explain_deque();

return 0;
}