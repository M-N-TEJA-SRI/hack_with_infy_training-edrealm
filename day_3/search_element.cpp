// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool search(int a[],int n,int key){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key)
        return true;
        else if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
    }
    return false;
}
int main() {
 int n,key;
 cin>>n>>key;
 int a[n],i;
 for(i=0;i<n;i++){
     cin>>a[i];
 }
 cout<<search(a,n,key);
    return 0;
}
/*
output
5 6
2 6 7 8 9 78
1
*/
