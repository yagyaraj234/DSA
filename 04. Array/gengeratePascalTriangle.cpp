#include<bits/stdc++.h>
using namespace std;

vector<int> generateRow(int row){
    vector<int> ansRow;
    long long ans=1;
    ansRow.push_back(1);
    for(int col=1;col<row;col++ ){
        ans= ans*(row-col);
        ans=ans/(col);
        ansRow.push_back(ans);
    }

    ansRow.push_back(1);
    return ansRow;
}


vector<vector<int>> generatePascalTriangle(int n){

    vector<vector<int>> ans;

    for(int i=1;i<=n;i++){
        vector<int> temp= generateRow(i);
        ans.push_back(temp);
    }


    return ans;
}

int main(){
    
    vector<vector<int>> ans =generatePascalTriangle(6);

    for(int i=0;i<6;i++){
        for(int j=0;j<=i;j++){
            cout<<ans[i][j] <<" ";
        }
    cout<<endl;
    }

    


return 0;
}