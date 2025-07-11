// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n],maxi=INT_MIN,sec=INT_MIN;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        if(a[i]>maxi){
            if(maxi>sec)
            sec=maxi;
            maxi=a[i];
        }
        else if(a[i]>sec&&a[i]!=maxi)
        sec=a[i];
    }
    if(sec==INT_MIN)
    sec=-1;
    cout<<sec;
    return 0;
}
/*
output
6
1 5 3 5 2 4
4
  */
