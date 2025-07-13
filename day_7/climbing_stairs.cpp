// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int steps(int n){
    if(n==0)
    return 0;
    else if(n<=2)
    return n;
    else
    return steps(n-1)+steps(n-2);
}
int main() {
   int n;
   cin>>n;
   cout<<steps(n);

    return 0;
}
/*
4
5*/
