#include<bits/stdc++.h>
using namespace std;

bool validateString(string s){
    for (int i = 0; s[i]!='\0'; i++)
        {
            if( !(s[i]>='a' &&s[i]<='z')|| !(s[i]>='A'&& s[i]<='Z') || !(s[i]>='0'&& s[i]<='9')) {
                return 0;
            }
        }

        return 1;
}

int main(){
    string s="thisisValid@@ n ( @String";
    cout<<s.length()<<endl;
    bool n=validateString(s);

        
        if(n=true)
        cout<<"This is a valid String";
        else
        cout<<"This is invalid String";

return 0;
}