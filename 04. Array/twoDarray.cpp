#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3][3]={{1,2,3},{2,5,6},{3,6,8}};


    cout<<a[2][1]<<endl; // sigle element of an array


    for(int i=0;i<3;i++){

        for (int j = 0; j < 3; j++)
        {
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }

    int **ar;
    ar = new int*[3];
    ar[0]= new int[4];
    ar[1]= new int[4];
    ar[2]= new int[4];


return 0;
}