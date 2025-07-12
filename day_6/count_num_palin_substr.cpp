// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   string s;
   cin>>s;
   int i,j,k,c=0;
   for(i=0;i<s.length();i++){
       j=i;
       k=i;
       while(j>=0&&k<s.length()&&s[j]==s[k]){
           c++;
           j--;
           k++;
           
       }
        j=i;
       k=i+1;
       while(j>=0&&k<s.length()&&s[j]==s[k]){
            c++;
           j--;
           k++;
          
       }
   }
   cout<<c;

    return 0;
}
/*
output
aaa
6
*/
