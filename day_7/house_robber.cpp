// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void robber(int a[],int n,int i,int sum,int &maxi){
    if(i>=n)
    {
       maxi=max(maxi,sum);
       return;
    }
    robber(a,n,i+2,sum+a[i],maxi);
    robber(a,n,i+1,sum,maxi);
}
int main() {
   int n;
   cin>>n;
int a[n],i,sum=0,maxi=0;
for(i=0;i<n;i++){
    cin>>a[i];
}
i=0;
robber(a,n,i,sum,maxi);
cout<<maxi;
    return 0;
}
/*
output
6
2 1 4 9 3 5
16
*/
