#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[5]={2,52,14,74,7};

    sort(a,a+5); // Sorting the array  [stating pos,ending pos +1]
    
    vector<int> v={3,62,15,21,42};

    sort(v.begin(),v.end());  // Sorting the vector [start,end]

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end(),greater<int>());  // Sorting in decending order

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    for(auto it:a){
        cout<<it<<" ";
    }

return 0;
}