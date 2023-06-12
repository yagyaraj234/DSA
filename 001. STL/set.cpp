#include<bits/stdc++.h>
using namespace std;
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

int main(){
    explain_set();

return 0;
}