#include<bits/stdc++.h>
using namespace std;

int main(){
    string str="love today";

    stack<char> s;

    for(int i=0;i<str.size();i++){
        s.push(str[i]);
    }
    string rev="";

    while(!s.empty()){
        rev.push_back(s.top());
        s.pop();
    }

    cout<<"reverse is : "<<rev<<endl;


return 0;
}