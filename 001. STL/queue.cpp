#include<bits/stdc++.h>
using namespace std;
void explain_queue(){
    // FIFO - First in First Out 
    queue<int> q;
    q.push(5);    //{5}
    q.push(32);   //{5,32}
    q.push(21);     //{5,32,21}
    q.push(90);     //{5,32,21,90}
    q.emplace(65);     // {5,32,21,90,65} -- adding element at the end

    cout<<q.back()<<endl;  // {65} - return last element
    cout<<q.front()<<endl;  // {5} - return first element

    q.pop();    // {5}  - First element get removed

    cout<<q.front()<<endl;   // {32}

    cout<<q.size();  // returns size of the queue
  
}

int main(){
    explain_queue();

return 0;
}