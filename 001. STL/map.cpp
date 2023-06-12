#include<bits/stdc++.h>
using namespace std;
void explain_map(){

    // map store unique keys in sorted order

    map<int,int> m;     // initialization of map
    // map<key,value> ml 

    m[1]=5;  // m[key]=value        [{1,5}]
    m.insert({2,5});   // [{1,5},{2,5}]
    m.insert({0,3});  // [{0,3},{1,5},{2,3}]

    for( auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }


}

void explain_multimap(){
    // in multiset the key are not unique 
    multimap<int,int> mp;
    mp.insert({2,3});
    mp.insert({2,4});
    mp.insert({1,4});
    mp.insert({0,3});

    for(auto it :mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}

void explain_unorderedMap(){
    unordered_map<int,int> mp;

    // it has unique keys but randomarized

    mp.insert({2,3});  // [{2,3}]
    mp.insert({3,6});   // [{2,3},{3,6}]
    mp.insert({9,1});   // [{9,1},{2,3},{3,6}]
    mp.insert({1,3});   // [{1,3},{9,1},{2,3},{3,6}]
    mp.insert({5,8});

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

}


int main(){

    explain_map();
    explain_multimap();
    explain_unorderedMap();
    

return 0;
}