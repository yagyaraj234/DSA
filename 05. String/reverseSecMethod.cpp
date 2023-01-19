#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[]="Python";
    char temp;
    cout<<s<<endl;

    int i,j;
    for (j = 0; s[j]!='\0'; j++)
    {
    }
    j=j-1;
    for ( i = 0; j>i; i++,j--)
    {
       temp=s[i];
       s[i]=s[j];
       s[j]=temp;
    }

    cout<<s<<endl;
    
    



return 0;
}