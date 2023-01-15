#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    int s=0;
    if(n==0){
        return 0;
    }
    else
    return sum(n-1)+n;
}

int main(){
    int n;

   n= sum(7);
   cout<<n<<endl;



return 0;
}