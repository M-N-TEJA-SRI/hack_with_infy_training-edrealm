// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n==0)
    cout<<0;
    else if(n==1)
    cout<<2;
    else{
   int x=(n*(4+((n-1)*2)))/2;
   cout<<x;
    }
    return 0;
}
/*
output
3
12
*/
