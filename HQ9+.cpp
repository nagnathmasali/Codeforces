#include <iostream>
using namespace std;

int main() {
  
  string s;
  int i;
  getline(cin,s);
  for(i=0;i<s.length();i++){
    if(s[i]=='H'||s[i]=='Q'||s[i]=='9'){
      cout<<"YES";
      break;
    }
  }
  if(i==s.length())
  cout<<"NO";
  
}