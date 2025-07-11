// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_set>
#include<vector>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],i;
    vector<int>v;
    unordered_set<int>s;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(s.find(a[i])==s.end())
        {
            v.push_back(a[i]);
            s.insert(a[i]);
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}
/*
output
8  
1 2 3 2 4 1 5 3
1 2 3 4 5
*/
