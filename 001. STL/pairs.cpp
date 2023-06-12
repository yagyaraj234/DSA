#include<bits/stdc++.h>
using namespace std;

void explain_pair(){

    pair<int,int> p;   // Initialization of pair

    p.first=45; // Assigning The Value
    p.second=35;

    cout<<p.first<<endl;
    cout<<p.second<<endl; // Accesing the Value

    pair<int,pair<int,int>> p2={2,{3,4}};

    cout<<p2.first<<endl;
    cout<<p2.second.first<<endl;
    cout<<p2.second.second<<endl;

    // We can also store others Value in pairs 

    pair<char,char> ch;
    ch.first='a';
    ch.second='b';
    cout<<ch.first<<endl;
    cout<<ch.second<<endl;

}

int main(){
    explain_pair();

return 0;
}