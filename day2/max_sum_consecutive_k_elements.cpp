// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n,k,i,maxi=0;
 cin>>n>>k;
 int a[n],sum=0;
 for(i=0;i<n;i++){
     cin>>a[i];
     if(i<k)
     sum+=a[i];
 }
 maxi=max(sum,maxi);
 int l=0,r;
 for(r=k;r<n;r++){
     sum-=a[l++];
     sum+=a[r];
     maxi=max(maxi,sum);
 }
 cout<<maxi;
    return 0;
}
/*
output
7 3
2 1 5 1 3 2 6
11
*/
