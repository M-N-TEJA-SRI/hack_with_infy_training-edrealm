// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int n,i;
    cin>>n;
    int a[n];
    vector<int>v;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(i==0){
            if(a[i]>a[i+1])
            v.push_back(a[i]);
        }
        else if(i==n-1){
            if(a[i]>a[i-1])
            v.push_back(a[i]);
        }
        else
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            v.push_back(a[i]);
        }
    }
    for(auto it:v){
        cout<<it<<" ";
    }
    return 0;
}
