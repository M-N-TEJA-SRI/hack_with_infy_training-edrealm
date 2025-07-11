// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    int n,i,sum=0;
    cin>>n;
    vector<int>pre(n,0);
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        pre[i]=(sum);
    }
  int t,l,r;
  cin>>t;
  while(t--){
     cin>>l>>r;
     l--;
     r--;
     if(l==0)
     cout<<pre[r]<<"\n";
     else
     cout<<pre[r]-pre[l-1]<<"\n";
  }
    return 0;
}
/*
output
5
1 2 3 4 5
3
1 3
2 5
1 5
6
14
15
*/
