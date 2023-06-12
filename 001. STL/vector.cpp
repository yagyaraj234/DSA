#include<bits/stdc++.h>
using namespace std;


void explain_vector()
{

    vector<int> v; // Declaration on vector

    v.push_back(4); //{4}
    v.push_back(5); // {4,5} Adding element at last position of the vector

    vector<int> v1(5, 100); // {100,100,100,100,100}  it assign 5 instances of 100 inside the vector

    vector<int> v3(5); // it declare a vector of size 5

    vector<int> v5(v1); // it copies the element of v1 into v5

    cout << v[0] << endl;
    cout << v5[0] << endl;    // accesing element
    cout << v5.at(0) << endl; // accessing element

    cout << v.back() << endl; // Accessing last element of vector

    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    { // iterate the vector
        cout << *(it) << " ";
    }
    cout << endl;

    for (auto it = v1.begin(); it < v1.end(); it++)
    { // We can use auto
        cout << *(it) << " ";
    }

    cout << endl;

    for (auto it : v)
    { // Simplest Form to iterate the vector
        cout << it << " ";
    }
    cout << endl;

    // Deletion operation in vector

    v1.pop_back(); // Removing the last element from vector

    v1.erase(v1.begin()); // Removing the first element

    v1.erase(v1.begin() + 1); // removing the second element

    v1.erase(v1.begin(), v1.begin() + 2); // Removing the element till 2nd element  (startIndex,endIndex)
    // Exmaple before : {1,2,3,4,5} after : {3,4,5}

    cout << v1.size()<<endl; // It gives the Size of the vector


    vector<int> copy(5,32);  // {32,32,32,32,32}

    // Insertion in vector

    copy.insert(copy.begin(),455);  // Insertion at Begining
    //{455,32,32,32,32,32} 

    copy.insert(copy.begin()+3,54);  // Insertion at any position  [Postion,value]
    // {455,32,32,54,32,32,32}

    copy.insert(copy.begin()+1,3,11);  // insert multiple values [position,no of elements, value]
    // {455,11,11,11,32,32,54,32,32,32}


    vector<int> copy1={3,42,4};

    copy.insert(copy.begin(),copy1.begin(),copy1.begin()+2);  // We can also insert vector into the vector
    // [position,starting pos of another vector,end pos of the another vector]



        // Deletion of the vector

    copy.erase(copy.begin());  // Deletion of first element 

    copy.erase(copy.begin()+3,copy.begin()+6); // [starting pos,ending pos]

    for(auto it: copy){
        cout<<it<<" ";
    }

    cout<<endl;


    // Swapping the value of the vectors
    // v1= {2,3};
    // v2= {5,6};

    // --------------------- v1.swap(v2);   Swap the  element -------------------
    
    // v1={5,6}  v2={2,3}

    
    copy.clear();  // It removes all the elements from the vector

    copy.empty();   // it returns true(1) or false(0)



    vector<pair<int, int>> vp; // We can also declare pair inside the vector

    vp={{2,4},{4,5},{5,6}};
    for( auto it: vp){
        cout<<it.first<<" "<<it.second<<endl;
    }
}


int main(){
    explain_vector();

return 0;
}