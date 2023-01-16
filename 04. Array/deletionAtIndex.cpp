#include<bits/stdc++.h>
using namespace std;
void display(int *a,int s){
    for(int i=0;i<s;i++){
        cout<<a[i]<<" ";
    }

    cout<<endl<<endl;
}
void input(int *a,int size){

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
}

int main(){

    int s=8;
    int *a;
    int len;
    cout<<"Enter the length of an array \n";
    cin>>len;
    // cout<<len<<endl;
    a=new int[s];

    input(a,len);
    // display(a,len);

    // Deletion operation on Array at given index
    // delete(index)
    int index=2;

    for (int i = index; i < len-1; i++)
    {
        a[i]=a[i+1];
    }
    len--;

    display(a,len);
    cout<<len<<endl;
    

    
   

return 0;
}