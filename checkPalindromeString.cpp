#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[]="madam";
    char m[6];

    int i,j;
    cout<<s<<endl;

    for ( i = 0;s[i]!='\0'; i++)
    {
    }
    i=i-1;
    for (j = 0; i>=0; j++,i--)
    {
        m[j]=s[i];
    }
    m[j]='\0';

    cout<<m<<endl;

    for (i=0,j=0; s[i]!='\0',m[j]!='\0'; i++,j++)
    {
        if(s[i]!=m[j])
        break;
    }

    if(s[i]==m[j])
    cout<<"It's is Palindrome"<<endl;

    else
    cout<<"It's not a Palindrome"<<endl;
    
    

return 0;
}