#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[]="findings the duplicate character in an string";

    int Hash[26]={0};
    
    for (int i = 0; s[i]!='\0'; i++)
    {
        Hash[s[i]-97]++;
    }

    for (int i = 0; i<26; i++)
    {
        if(Hash[i]>1){
            cout<<char(i+97)<<":"<<Hash[i]<<endl;
        }
    }
    
    
    


return 0;
}