#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool compare(char b,char c)
    {
        if(b=='{' && c=='}')
            return true;
        else if(b=='[' && c==']')
            return true;
        else if(b=='(' && c==')')
            return true;
         return false;
    }
    bool ispar(string x)
    {
        stack<char> s;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]=='[' || x[i]=='{' || x[i]=='(')
                s.push(x[i]);
            
            else if(x[i]==']' || x[i]=='}' || x[i]==')')
            {
                if(s.empty() || !compare(s.top(),x[i])) 
                    return false;
                else
                    s.pop();
            }
        }
        if(s.empty())
            return true;
        else
            return false;
    }   

};

int main(){

    int t;
    cin>>t;
    string s;
    while (t--)
    {
        cin>>s;
        Solution obj;
        if(obj.ispar(s))
        cout<<"Balanced"<<endl;
        else
        cout<<"Not Balanced"<<endl;
    }
    
    

return 0;
}