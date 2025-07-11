// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n,k,i,maxi=0,sum=0;
 cin>>n>>k;
 int a[n];
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 int l=0,r;
 for(r=0;r<n;r++){
    sum+=a[r];
    if(sum<=k)
    maxi=max(maxi,r-l+1);
    else
    l=r+1;
 }
 cout<<maxi;
    return 0;
}
/*
output
7 10
1 2 3 4 5 6 1
4
*/
