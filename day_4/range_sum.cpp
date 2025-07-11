// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
#include<climits>
using namespace std;
void build(int a[],vector<int>&seg,int i,int low,int high){
    if(low==high){
        seg[i]=a[low];
        return;
    }
    int mid=(low+high)/2;
    build(a,seg,2*i+1,low,mid);
    build(a,seg,2*i+2,mid+1,high);
    seg[i]=(seg[2*i+1]+seg[2*i+2]);
}
int overlap(vector<int>&seg,int i,int low,int high,int left,int right){
    if(high<left||right<low)
    return 0;
    else if(left<=low&&high<=right)
    return seg[i];
    else
    {
        int mid=(low+high)/2;
        int x=overlap(seg,2*i+1,low,mid,left,right);
        int y=overlap(seg,2*i+2,mid+1,high,left,right);
        return (x+y);
    }
}
void update(vector<int>&seg,int i,int low,int high,int ind,int x){
    if(low==high){
        seg[i]=x;
        return;
    }
    int mid=(low+high)/2;
    if(ind<=mid)
    update(seg,2*i+1,low,mid,ind,x);
    update(seg,2*i+2,mid+1,high,ind,x);
    seg[i]=(seg[2*i+1]+seg[2*i+2]);
}
int main() {
   int n,i;
   cin>>n;
   int a[n],low=0,high=n-1;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   vector<int>seg(4*n,0);
   i=0;
   build(a,seg,i,low,high);
   int t;
   
       int q,left,right,ind,x;
   cin>>t;
   while(t--){
       cin>>q;
       if(q==1){
           i=0;
           cin>>left>>right;
           left--;
           right--;
           cout<<overlap(seg,i,0,n-1,left,right)<<"\n";
       }
       else{
           cin>>ind>>x;
           a[ind]=x;
           update(seg,i,0,n-1,ind,x);
       }
   }
    return 0;
}
/*
output
6
1 2 3 4 5 6
4
1 2 4
2 3 10
1 1 6
1 3 5
9
27
19
*/
