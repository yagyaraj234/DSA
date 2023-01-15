#include<bits/stdc++.h>
using namespace std;

// Honour Rule

double e(int x,int n){
    static double s;
    if(n==0)
    return s;
    s=1+x*s/n;
    return e(x,n-1);
}

// Iteration Method


double expo(int x,int n){
    double s=1;
    double num=1;
    double den=1;
    for (int i = 0; i < n; i++)
    {
        num*=x;
        den*=i;
        s+=num/den;
    }
   return s; 
}

int main(){

    cout<<e(1,10)<<endl;

    cout<<expo(3,5)<<endl;
    

return 0;
}