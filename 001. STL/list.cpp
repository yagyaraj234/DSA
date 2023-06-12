#include<bits/stdc++.h>
using namespace std;

void explain_list(){
    // List works as Doubly linked list
    list<int> l; // Initaialization of Vector


    l.push_back(5);
    l.emplace_back(2); // Add element at last of the list

    l.push_front(34);
    l.emplace_front(32); // Add element at the stating of the list


    // all other same function like vector we can use here
    // begin(), end(), rbegin(), rend(), size(), copy(), erase(), insert(), clearsize(), swap()




    for(auto it:l){
        cout<<it<<" ";
    }



}
int main(){
    explain_list();

return 0;
}