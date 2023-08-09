#include<bits/stdc++.h>
using namespace std;

vector<int> printPascalRow(int r){
    vector<int> row;
    row.push_back(1);
    long long int ans=1;
    for(int col =1;col<r;col++){
        ans = ans* (r-col);
        ans =ans/col;
        row.push_back(ans);
    }
    return row;
}

int main(){
    
   vector<int> ans = printPascalRow(7);

    for( auto it: ans){
        cout<<it<<" ";
    }

return 0;
}