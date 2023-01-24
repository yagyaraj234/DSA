#include<bits/stdc++.h>
using namespace std;

class diagonal{
    private:
    int *A;
    int n;

    public:
    diagonal(){
        n=2;
        A= new int[2];
    }
    diagonal(int n){
        this->n=n;
        A=new int[n];
    }
    ~diagonal(){
        delete []A;
    }
    void set(int i,int j,int k );
    int get(int i,int j );
    void display();

    // ~diagonal();
};

void diagonal::set(int i,int j,int k){

    if(i==j){
        A[i-1]=k;
    }
}
int diagonal::get(int i,int j){
    if(i==j)
        return A[i-1];

    return 0;
}
void diagonal::display(){
    for (int j = 0; j < n; j++)
    {   
        for (int i = 0; i < n; i++)
        {
           
        if(i==j)
            cout<<A[j]<<" ";
        
        else
        cout<<"0 "; 
        }
        cout<<endl;
    }

    
}

int main(){

    // int arr[5][5]={{1,0,0,0,0},{0,2,0,0,0},{0,0,4,0,0},{0,0,0,9,0},{0,0,0,0,10}};  

    // declaration of diagonal matrix takes more memory because of 2d array 

    diagonal d(4);
    d.set(1,1,4);
    d.set(2,2,5);
    d.set(3,3,6);
    d.set(4,4,8);
    // int a[5];

    d.display();


return 0;
}