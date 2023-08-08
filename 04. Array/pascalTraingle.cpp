// You have given a row and column you have to find the value at the pascal triangle


#include<bits/stdc++.h>
using namespace std;

int main(){
    int row=4;
    int column=3;
    int rowans=1;
    int colans=1;

    for(int i=row;i>=column;i--){
        rowans*=i;
    }
    for(int i=column;i>0;i--){
        colans*=i;
    }

    cout<<rowans/colans<<endl;


return 0;
}