// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool isprime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main() {
    int n;
    cin>>n;
    if(n==1)
    cout<<0;
    else
   cout<<isprime(n);
    return 0;
}
/*output
13(spl)
1
*/
