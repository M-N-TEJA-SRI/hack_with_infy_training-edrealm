// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n,k,i,maxi=0;
 cin>>n>>k;
 int a[n],c=0;
 for(i=0;i<n;i++){
     cin>>a[i];
     if(i<k&&a[i]%2==1)
     c++;
 }
 maxi=max(c,maxi);
 int l=0,r;
 for(r=k;r<n;r++){
     if(a[r]%2==1)
     c++;
    if(a[l]%2==1)
    c--;
    l++;
     maxi=max(maxi,c);
 }
 cout<<maxi;
    return 0;
}
/*
output
7 3
2 1 5 1 3 2 6
3
*/
