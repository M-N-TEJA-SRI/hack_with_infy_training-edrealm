// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 int n,i,j,num1=-1,num2=-1,sum,target,flag=0;
 cin>>n>>target;
 int a[n];
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 i=0,j=n-1;
 while(i<j){
     sum=a[i]+a[j];
     if(sum==target){
         flag=1;
         num1=a[i];
         num2=a[j];
         break;
     }
     else if(sum>target)
     j--;
     else
     i++;
 }
 cout<<num1<<" "<<num2;
    return 0;
}
/*
output
5
7
1 2 3 4 5
2 5
  */
