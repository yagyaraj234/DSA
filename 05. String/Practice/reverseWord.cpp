#include<bits/stdc++.h>
using namespace std;

string reverseWords(string S) 
    { 
        string result = "";
        string curr_word = "";
        
        vector<string> word;
    
        for (int i = 0; i < S.length(); ++i)
        {
            if(S[i] == ' ')
            {
                word.push_back(curr_word);
                curr_word = "";
            }
            else
                curr_word += S[i];
        }
        word.push_back(curr_word);
        
        for (int i = word.size()-1; i>=0; --i)
        {
            result += word[i];
            if(i!=0)
                result += ' ';
        }
        return result;
    } 

int main(){

    string s="Hello how are You people";
    cout<<s<<endl;

    cout<<reverseWords(s);
    

return 0;
}