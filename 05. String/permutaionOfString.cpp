#include<bits/stdc++.h>
using namespace std;


void perm(char s[],int k){
    static int A[10]={0};
    static char res[10];
    int i;

    if(s[k]=='\0'){
        res[k]='\0';
        cout<<res<<endl;
    }
    else{
        for ( i = 0; s[i]!='\0'; i++)
        {
            if(A[i]==0){
                res[k]=s[i];
                A[i]=1;
                perm(s,k+1);
                A[i]=0;
            }
        }
        
    }
}

int main(){
    // Permutation is an arrangement of object in a definite order

    // For ex. {a,b,c};
    // {a,b,c}, {b,a,c}, {b,c,a}, {c,a,b},{a,c,b},{c,b,a}
    // 3!


    char s[]="ABCD";
    perm(s,0);


return 0;
}