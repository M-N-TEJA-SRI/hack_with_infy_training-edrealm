// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int sub(int a[],int i,int n){
    if(i>=n)
    return 0;
    else
    {
        if(a[i]%2==0)
    return a[i]+sub(a,i+1,n);
        else
        return sub(a,i+1,n);
    }
}
int main() {
    // Write C++ code here
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
   i=0;
   cout<<sub(a,i,n);
    return 0;
}
/*
output
5 
1 2 8 4 9
14
*/
