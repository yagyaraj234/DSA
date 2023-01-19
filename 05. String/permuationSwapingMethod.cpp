#include<bits/stdc++.h>
using namespace std;


void perm(char s[],int l,int h){
    int i;

    if(l==h){
        cout<<s<<endl;
    }
    else{
        for ( i = 0; i<=h; i++)
        {
           swap(s[l],s[i]);
           perm(s,l+1,h);
           swap(s[l],s[i]);
        }
        
    }
}

int main(){
    char s[]="ABC";
    perm(s,0,2);


return 0;
}