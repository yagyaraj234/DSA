#include<bits/stdc++.h>
using namespace std;

class lowerTriangle{
    private:
    int *A;
    int n;

    public:
    lowerTriangle(){
        n=2;
        A= new int[2*(2+1)/2];
    }
    lowerTriangle(int n){
        this->n=n;
        A=new int[n*(n+1)/2];
    }
    ~lowerTriangle(){
        delete []A;
    }
    void set(int i,int j,int k );
    int get(int i,int j );
    void display();

    // ~diagonal();
};

void lowerTriangle::set(int i,int j,int k){

    if(i>=j){
        A[i*(i-1)/2+j-1]=k;
    }
}
int lowerTriangle::get(int i,int j){
    if(i>=j)
        return A[i*(i-1)/2+j-1];

    return 0;
}
void lowerTriangle::display(){
    for (int j = 1; j <= n; j++)
    {   
        for (int i = 1; i <= n; i++)
        {
           
        if(i>=j)
            cout<<A[j*(j-1)/2+i-1]<<" ";
        
        else
        cout<<"0 "; 
        }
        cout<<endl;
    }

    
}

int main(){

    lowerTriangle d(4);
    d.set(1,1,4);
    d.set(2,2,5);
    d.set(3,3,6);
    d.set(4,4,8);
    // int a[5];
    // int x;

    // for (int i = 1; i<=4; i++)
    // {
    //     for (int j = 1; j<=4; j++)
    //     {
    //         /* code */
    //         cin>>x;
    //         d.set(i,j,x);
    //     }
        
    // }
    

    d.display();


return 0;
}