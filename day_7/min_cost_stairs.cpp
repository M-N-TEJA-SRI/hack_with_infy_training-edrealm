// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
   int n;
   cin>>n;
   vector<int>cost(n);
 int i;
 for(i=0;i<n;i++){
     cin>>cost[i];
 }
        vector<int>v(cost.size(),0);
        v[0]=cost[0];
        v[1]=cost[1];
        for(i=2;i<cost.size();i++){
            v[i]=min(v[i-1],v[i-2])+cost[i];
        }
        cout<<min(v[v.size()-1],v[v.size()-2]);
    return 0;
}
/*
output
10
1 100 1 1 1 100 1 1 100 1
6
*/
