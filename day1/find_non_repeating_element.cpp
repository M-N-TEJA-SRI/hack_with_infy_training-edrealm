// Online C++ compiler to run C++ program online
#include <iostream>
#include<unordered_map>
using namespace std;
int main() {
    int n,flag=0;
    cin>>n;
    int a[n],i,xori=0;
    for(i=0;i<n;i++){
        cin>>a[i];
      xori^=a[i];
    }
    cout<<xori;
    return 0;
}
/*
output
5
9 0 0 9 2
2
*/
