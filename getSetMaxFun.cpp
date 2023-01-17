#include<bits/stdc++.h>
using namespace std;

void display(int *a,int s){
    for (int i = 0; i < s; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int sum(int *a,int s){
    int sum=0;
    for (int i = 0; i < s; i++)
    {
        sum+=a[i];
    }
    return sum;
    
}
double avg(int *a,int s){
   int avg =sum(a,s);

   return avg/s;
    
}

int main(){
    int a[6]={4,6,26,67,4,3};

    // set function is used to set/replace the value in an index

    // set(index,value)
    int index=2,value=45;

    for (int i = 0; i <= index; i++)
    {
        if(i=index){
            a[i]=value;
        }
    }
    display(a,6);
    
    // get Function is used to get the value of given index

    // get(index)

    for (int i=0;i<6;i++)
    {
        if(i==index){
            cout<<a[i]<<endl;
        }
    }

        // max function to find the maximum value of an element in an array
    int max=a[0];

    for (int i = 0; i < 6; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
        cout<<"Max :"<<max<<endl;

    display(a,6);

    int min=a[0];

    for (int i = 0; i < 6; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"Min :";
        cout<<min<<endl;
        // display(a,6);

    cout<<"Sum :"<<sum(a,6)<<endl;
    double average=avg(a,6);
    cout<<"Average :"<<average<<endl;

return 0;
}