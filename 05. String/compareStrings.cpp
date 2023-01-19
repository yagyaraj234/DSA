#include<bits/stdc++.h>
using namespace std;

int main(){

    // Comparison Two String They are Same or Not

    char s[]="Printer";
    char m[]="Printing";
    int i,j;

    for (i=0,j=0; s[i]!='\0',m[j]!='\0';i++,j++)
    {
       if(s[i]!=m[j])
       break;
    }
        if(s[i]==m[j])
        cout<<"Equal"<<endl;
        else
        cout<<"This is not a Same String"<<endl;

        if(s[i]>m[j]){
            cout<<"Second"<<m[j]<<endl;
        }
        else
        cout<<"First"<<" "<<s[i]<<endl;

return 0;
}