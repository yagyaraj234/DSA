#include<bits/stdc++.h>
using namespace std;


// Finding the pair to add =k
int main(){
    int a[8]={2,3,5,6,8,9,10,11};

    int k=12;  // a+b=12
    int n=0; // No. of pairs

    for (int i = 0; i < 8; i++)
    {
        for (int j = i; j <8; j++)
        {
            if(a[i]+a[j]==k && i!=j){
                cout<<a[i]<<" + "<<a[j]<<" = "<<k<<endl;
                n++;
            }
        }
        
    }
    if(n>0)
    cout<<"The Total Number of Pairs are :"<<n<<endl;

    else
    cout<<"There is no such pairs"<<endl;
    

return 0;
}