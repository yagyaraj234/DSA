#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Toh Kaise Hai Aap Log";

    int vowel_count=0,const_count=0;
    int words=1;
    for (int i = 0; s[i]!='\0'; i++)
    {
        if(s[i]>=65 && s[i]<=90){
        s[i]=s[i]+32;
        }
        
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            vowel_count++;
        }

        else if(s[i]>='a'&& s[i]<='z'){
            const_count++;
        }
        else if(s[i]==' '){
            words++;
        }
        
    }

    cout<<s<<endl;
    

    cout<<"Vowels :"<<vowel_count<<endl;
    cout<<"Consonent :"<<const_count<<endl;
    cout<<"No. of Words :"<<words<<endl;

return 0;
}