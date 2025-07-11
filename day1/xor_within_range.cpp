// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int xori(int n){
    if(n%4==0)
    return n;
    else if(n%4==1)
    return 1;
    else if(n%4==3)
    return 0;
    else
    return n+1;
    
}
int main() {
  int l,r;
  cin>>l>>r;
  int x=xori(l-1);
  int y=xori(r);
  x^=y;
  cout<<x;
    return 0;
}
/*
output
3 7
3
*/
