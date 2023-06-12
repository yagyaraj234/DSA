#include <bits/stdc++.h>

using namespace std;

void explain_pair()
{

    pair<int, int> p; // Initialization of pair

    p.first = 45; // Assigning The Value
    p.second = 35;

    cout << p.first << endl;
    cout << p.second << endl; // Accesing the Value

    pair<int, pair<int, int>> p2 = {2, {3, 4}};

    cout << p2.first << endl;
    cout << p2.second.first << endl;
    cout << p2.second.second << endl;

    // We can also store others Value in pairs

    pair<char, char> ch;
    ch.first = 'a';
    ch.second = 'b';
    cout << ch.first << endl;
    cout << ch.second << endl;
}

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

void explain_list(){
    // List works as Doubly linked list
    list<int> l; // Initaialization of Vector


    l.push_back(5);
    l.emplace_back(2); // Add element at last of the list

    l.push_front(34);
    l.emplace_front(32); // Add element at the stating of the list


    // all other same function like vector we can use here
    // begin(), end(), rbegin(), rend(), size(), copy(), erase(), insert(), clearsize(), swap()




    for(auto it:l){
        cout<<it<<" ";
    }
}

void explain_deque(){

    deque<int> dq;

    dq.push_back(5); // {5}
    dq.emplace_back(2); //  {5,2} - Add element at last of the deque

    dq.push_front(34);   //{34,5,2}
    dq.emplace_front(32); // {32,34,5,2} -  Add element at the stating of the deque

    dq.pop_back();      // {32,34,5}   - Removing element from back
    dq.pop_front();         // {34,5} Removing element from fornt

    dq.front();         // {34} - it gives the first element of the deque
    dq.back();         //{5} - it gives the last element of the deque


    // all other same function like vector we can use here
    // begin(), end(), rbegin(), rend(), size(), copy(), erase(), insert(), clearsize(), swap()

}

void explain_stack(){

    // LIFO - Last in first out

    stack<int> st;  // intialization of stack
    st.push(5);   // {5} - pushing element to stack
    st.push(45);   //{45,5}
    st.push(21);   //{21,45,5}
    st.push(1);   //{1,21,45,5}
    st.emplace(200);   // {200,1,21,45,5};

//    ---------- We can not iterate stack like:  *** st[4] -this is invalid

    st.pop();      //{1,21,45,5} - remove the recently enteres  element

    cout<<"TOP element : "<<st.top()<<endl; // return top value 

    cout<<"size:"<<st.size()<<endl;
    cout<<"empty:"<<st.empty()<<endl;
    
}

void explain_queue(){
    // FIFO - First in First Out 
    queue<int> q;
    q.push(5);    //{5}
    q.push(32);   //{5,32}
    q.push(21);     //{5,32,21}
    q.push(90);     //{5,32,21,90}
    q.emplace(65);     // {5,32,21,90,65} -- adding element at the end

    cout<<q.back()<<endl;  // {65} - return last element
    cout<<q.front()<<endl;  // {5} - return first element

    q.pop();    // {5}  - First element get removed

    cout<<q.front()<<endl;   // {32}

    cout<<q.size();  // returns size of the queue
  
}

void explain_PQ(){
    priority_queue<int> pq;  // Initialization of pq

    pq.push(45);  // {45}
    pq.push(21);    // {45,21}
    pq.push(10);    // {45,21,10}
    pq.push(32);    // {45,32,21,10}
    pq.emplace(102);    // {102,45,32,21,10}

    cout<<pq.top()<<endl;   // {102} - returns highest value in present in pq

    pq.pop();   // {102} - Remove highest value

    cout<<pq.top()<<endl;


    // Minimum heap

    priority_queue<int,vector<int>,greater<int>> pq2;

    pq2.push(45);  // {45}
    pq2.push(21);    // {21,45}
    pq2.push(10);    // {10,21,45}
    pq2.emplace(102);    //  {10,21,45,102}

    cout<<pq2.top()<<endl;  // {10} - returns lowest value 

    pq2.pop();    // {10} - remove lowest value

    cout<<pq2.top()<<endl;   // {21} - now returns the lowest value

}

void explain_set(){
        // in set everything is ***sorted and unique ***

    set<int> st; // {} Initailization

    st.insert(5); // {5}
    st.emplace(6);  //{5,6}
    st.insert(3);  // {3,5,6}
    st.insert(6);  //{3,5,6}

    auto it= st.find(6);   // return iteration of the 6

    st.erase(5);            // Erase the element 5 from the set

    for(auto it:st){
        cout<<it<<" ";
    }
    cout<<endl;
        cout<<st.size();
    


}

void explain_bound(){
    vector<int> v={2,3,52,52,52,61,61,53,2,1};

    sort(v.begin(),v.end());
    for( auto it: v){
        cout<<it<<" ";
    }
    cout<<endl<<v.size()<<endl;

        // Lower Bound
    //    auto it =lower,upper;
    vector<int>::iterator lower,upper;
       lower =lower_bound(v.begin(),v.end(),52);  // It is used to return  an iterator pointing to the first element in the range
       upper =upper_bound(v.begin(),v.end(),52); // It is used to return an iterator pointing to the last element in the range

       cout<<"Lower bound at index : "<<(lower-v.begin())<<endl;
       cout<<"upper bound at index : "<<(upper-v.begin())<<endl;

}

void explain_multiset(){
    // In multiset every element is sorted but not unique 

    multiset<int> ms;  // declaration

    ms.insert(5);   // {5} - insertion
    ms.insert(4);   // {4,5}
    ms.emplace(3);  //{3,4,5}
    ms.emplace(3);  // {3,3,4,5}
    ms.emplace(5);  // {3,3,4,5,5}
    ms.emplace(5);  // {3,3,4,5,5,5}
    ms.emplace(5);  // {3,3,4,5,5,5,5}
    ms.emplace(5);  // {3,3,4,5,5,5,5,5}

    cout<<ms.count(5)<<endl; // Returns no. of element

    ms.erase(3);   // remove every element which has value of 5

    ms.erase(ms.find(5)); // it only deletes the first occurence of 5

    // ms.erase(ms.find(5),ms.find(5)+4);    // to delete [start,end]

    cout<< ms.size()<<endl;   // Returns the size

    for( auto it: ms){
        cout<<it<<" ";
    }
    cout<<endl;


    // rest functions are same as set Container
}
void explain_unSet(){
    // In unordered_set every element is  unique 

    unordered_set<int> ms;  // declaration

    // Lower and upper bound does not work

    ms.insert(4);
    ms.insert(5);
    ms.insert(8);
    ms.insert(1);


    for(auto it:ms){
        cout<<it<<" ";
    }
    cout<<endl;

    // rest functions are same as set Container
}

void explain_map(){

    // map store unique keys in sorted order

    map<int,int> m;     // initialization of map
    // map<key,value> ml 

    m[1]=5;  // m[key]=value        [{1,5}]
    m.insert({2,5});   // [{1,5},{2,5}]
    m.insert({0,3});  // [{0,3},{1,5},{2,3}]

    for( auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }


}

void explain_multimap(){
    // in multiset the key are not unique 
    multimap<int,int> mp;
    mp.insert({2,3});
    mp.insert({2,4});
    mp.insert({1,4});
    mp.insert({0,3});

    for(auto it :mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    
}

void explain_unorderedMap(){
    unordered_map<int,int> mp;

    // it has unique keys but randomarized

    mp.insert({2,3});  // [{2,3}]
    mp.insert({3,6});   // [{2,3},{3,6}]
    mp.insert({9,1});   // [{9,1},{2,3},{3,6}]
    mp.insert({1,3});   // [{1,3},{9,1},{2,3},{3,6}]
    mp.insert({5,8});

    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

}

int main()
{

    // explain_pair();
    // explain_vector();
    // explain_list();
    // explain_deque();
    // explain_stack();
    // explain_queue();
    // explain_PQ();
    // explain_set();
    // explain_bound();
    // explain_multiset();
    // explain_unSet();
    // explain_map();
    // explain_multimap();
    explain_unorderedMap();
    

    return 0;
}