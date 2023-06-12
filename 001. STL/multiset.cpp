#include<bits/stdc++.h>
using namespace std;
void explain_multiset(){
    // In multiset every element is sorted but not unique 

    multiset<int> ms;  // declaration

    ms.insert(5);   // {5} - insertion
    ms.insert(4);   // {4,5}
    ms.emplace(3);  //{3,4,5}
    ms.emplace(3);  // {3,3,4,5}
    ms.emplace(5);  // {3,3,4,5,5}
    ms.emplace(5);  // {3,3,4,5,5,5}
    ms.emplace(5);  // {3,3,4,5,5,5,5}
    ms.emplace(5);  // {3,3,4,5,5,5,5,5}

    cout<<ms.count(5)<<endl; // Returns no. of element

    ms.erase(3);   // remove every element which has value of 5

    ms.erase(ms.find(5)); // it only deletes the first occurence of 5

    // ms.erase(ms.find(5),ms.find(5)+4);    // to delete [start,end]

    cout<< ms.size()<<endl;   // Returns the size

    for( auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl;


    // rest functions are same as set Container
}

int main(){
    explain_multiset();

return 0;
}