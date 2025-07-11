// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n],maxi=0,maxnum=-1;
    unordered_map<int,int>mp;
    for(i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
   for(auto it:mp){
       if(it.second>maxi)
       {
           maxi=it.second;
           maxnum=it.first;
       }
   }
    cout<<maxnum<<" "<<maxi;
    return 0;
}
/*
output
6
1 5 3 5 2 4
5 2
*/
