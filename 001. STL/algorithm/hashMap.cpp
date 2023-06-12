#include<bits/stdc++.h>
using namespace std;

int main(){

    // For integers
    int a[10]={1,2,4,21,24,24,1,4,2,1};
    unordered_map<int,int> mp;
    for(int i=0;i<10;i++){
        mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    // For character

    string s="hello world";
    map<char,int> mpp;

    for(int i=0;i<s.size();i++){
        mpp[s[i]-'a']++;
    }
    for(auto it:mpp){
        cout<<char((it.first)+'a')<<"->"<<it.second<<endl;
    }

return 0;
}