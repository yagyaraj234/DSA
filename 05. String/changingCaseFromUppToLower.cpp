#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[]="yaGYAaraj";

    cout<<s<<endl;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90)
        s[i]=s[i]+32;

        else if(s[i]>='a' && s[i]<='z')
        s[i]=s[i]-32;
    }
    
    cout<<s<<endl;


return 0;
}