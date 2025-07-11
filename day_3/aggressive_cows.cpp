// Online C++ compiler to run C++ program online
#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;
int search(int a[],int n,int mid,int k){
    int i,last=a[0],c=1;
    for(i=1;i<n;i++){
        if(a[i]-last>=mid){
       last=a[i];
       c++;
        }
    }
    return c;
}
int main() {
    // Write C++ code here
    int n,k,i,l=INT_MAX,h=INT_MIN,mid,ans=-1,x;
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        l=min(l,a[i]);
        h=max(h,a[i]);
    }
    sort(a,a+n);
    if(k==1)
    cout<<1<<"\n";
    else if(k==2)
    cout<<a[n-1]-a[0]<<"\n";
    else{
    while(l<=h){
        mid=(l+h)/2;
        x=search(a,n,mid,k);
        if(x>=k)
    {
            ans=mid;
            l=mid+1;
        }
        else
        h=mid-1;
    }
    cout<<ans;
    }
    return 0;
}
/*
output
5 3
1 2 8 4 9
*/
