// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool cmp(pair<int,int>&r1,pair<int,int>&r2){
    return r1.second>r2.second;
}
int main() {
    int n,i;
    cin>>n;
    int start[n],end[n];
    for(i=0;i<n;i++){
        cin>>start[i];
    }
for(i=0;i<n;i++){
        cin>>end[i];
    }
   vector<pair<int,int>>v;
   for(i=0;i<n;i++){
       v.push_back({start[i],end[i]});
   }
   sort(v.begin(),v.end(),cmp);
   int last=-1,c=0;
   for(i=0;i<v.size();i++){
       if(last<start[i]){
           last=end[i];
           c++;
       }
   }
   cout<<c;
    return 0;
}
/*
output
6
1 3 0 5 8 5
2 4 6 7 9 9
4*/
