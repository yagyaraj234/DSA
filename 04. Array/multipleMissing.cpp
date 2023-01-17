#include<bits/stdc++.h>
using namespace std;

int main(){
    // Finding Multiple missing no throught indices

    int b[14]={4,5,7,8,9,10,11,12,13,15,16,17,19,20};


    int diff=b[0]-0;
    cout<<"Diff : "<<diff<<endl;
    int tnum=0;

    for (int i = 0; i < 14; i++)
    {
        if(b[i]-i!=diff){
            cout<<"Missing No:  "<<i+diff<<endl;
            diff++;
            tnum++;
        }
    }




cout<<"Total No. of missing "<<tnum<<endl;
return 0;
}