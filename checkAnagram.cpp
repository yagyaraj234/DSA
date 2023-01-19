#include<bits/stdc++.h>
using namespace std;

// If string have same character and a size of string are equal it is anagram 

// For Example 
//     string s="decimal";    
//     string m="medical";

    // The above two given strings are Anagram

    // How to find the given Strings are anagram or not
    // 1. check length of string.  (If legnth is not equal the strings are not anagram).


    int main(){


        char s[]="decimal medical";
        char s2[]="medical decimal";

        int Hash[26]={0};

        for (int i = 0; s[i]!='\0'; i++)
        {
            Hash[s[i]-97]++;
        }

        for (int j = 0; s2[j]!='\0'; j++)
        {
            Hash[s2[j]-97]--;
        }

        // for (int k = 0; k < 26; k++)
        // {
        //     cout<<char(k+65)<<":"<<Hash[k]<<endl;
        // }
        int m;
        for ( m = 0; m < 26; m++)
        {
            if(Hash[m]==1 || Hash[m]== -1){
                break;
            }
        }
        
        if(Hash[m]==1 || Hash[m]== -1)
        {
            cout<<"It is not an anagram"<<endl;
        }

        else
        cout<<"IT's anagram"<<endl;
        
        
        
        
    

return 0;
}