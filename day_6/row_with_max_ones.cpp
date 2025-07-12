// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int n,m,i,j,maxi=0,row=-1,c,ind;
  cin>>n>>m;
  ind=m-1;
  int a[n][m];
  for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          cin>>a[i][j];
      }
  }
  for(i=0;i<n;i++){
      for(j=ind;j>=0;j--){
          if(a[i][j]!=1)
          break;
      }
      c=m-(j+1);
      if(c>maxi){
          maxi=c;
          row=i;
      }
      ind=j;
  }
cout<<maxi<<" "<<row;
    return 0;
}
/*
output
3 4
0 0 1 1
0 1 1 1
0 0 0 1
3 1
*/
