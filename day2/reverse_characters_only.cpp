// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
bool ischar(char ch){
    return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}
int main() {
 string s;
getline(cin,s);
 int i=0,j=s.length()-1;
 while(i<j){
  if(ischar(s[i])==false)
  i++;
  if(ischar(s[j])==false)
  j--;
  else{
      swap(s[i++],s[j--]);
  }
 }
 cout<<s;
    return 0;
}
/*
output
teja08@sri
irsa08@jet
*/
