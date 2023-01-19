#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[]="python";
    int i,j;
    char m[7];
    cout<<s<<endl;

    for (i = 0; s[i]!='\0'; i++)
    {
    }

    i=i-1;
    for (j = 0; i>=0; i--, j++)
    {
        m[j]=s[i];
    }
    m[j]='\0';
    cout<<m<<endl;

return 0;
}