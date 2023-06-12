#include<bits/stdc++.h>
using namespace std;

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

int main(){
    explain_bound();

return 0;
}