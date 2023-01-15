#include<bits/stdc++.h>
using namespace std;

double e(int n,int x){
    static double p=1,f=1;
    double r;
    if(x==0){
        return 1;
    }
    else
    r=e(n,x-1);
    p=p*n;
    f=f*x;

    return r+p/f;
}
int main(){
    
    cout<<e(1,10);

return 0;
}