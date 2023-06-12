#include<bits/stdc++.h>
using namespace std;
void explain_PQ(){
    priority_queue<int> pq;  // Initialization of pq

    pq.push(45);  // {45}
    pq.push(21);    // {45,21}
    pq.push(10);    // {45,21,10}
    pq.push(32);    // {45,32,21,10}
    pq.emplace(102);    // {102,45,32,21,10}

    cout<<pq.top()<<endl;   // {102} - returns highest value  present in pq

    pq.pop();   // {102} - Remove highest value

    cout<<pq.top()<<endl;


    // Minimum heap

    priority_queue<int,vector<int>,greater<int>> pq2;

    pq2.push(45);  // {45}
    pq2.push(21);    // {21,45}
    pq2.push(10);    // {10,21,45}
    pq2.emplace(102);    //  {10,21,45,102}

    cout<<pq2.top()<<endl;  // {10} - returns lowest value 

    pq2.pop();    // {10} - remove lowest value

    cout<<pq2.top()<<endl;   // {21} - now returns the lowest value

}

int main(){
    explain_PQ();

return 0;
}