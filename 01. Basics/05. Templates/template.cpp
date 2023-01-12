#include<bits/stdc++.h>
using namespace std;

template<class T>  // intialise
class rectangle{

    private:
    T length;
    T breadth;

    public:
    void lenBreadth(T l,T b){
        this->length=l;
        this->breadth=b;
    }

    T area();
    T parameter();

};

    template<class T>           // initialise
    T  rectangle<T>::area(){
    int c;
    return c=length*breadth;
}
    template<class T>           // initialise
    T rectangle<T>::parameter(){
    T p=2*(length+breadth);
    return p;
}
int main(){

    rectangle<int> r; // Passing int it replace every where with int
    r.lenBreadth(5,6);
   cout<< r.area()<<endl;
   cout<< r.parameter()<<endl;
    

return 0;
}