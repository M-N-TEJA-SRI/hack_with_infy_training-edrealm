// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[n],i;
    unordered_map<int,int>mp;
    for(i=0;i<n;i++){
        cin>>a[i];
       mp[a[i]]++;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
}
/*
output
8  
1 2 3 2 4 1 5 3
5 1
4 1
3 2
2 2
1 
*/
