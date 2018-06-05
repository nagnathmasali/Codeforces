#include <bits/stdc++.h>
using namespace std;


int main(){

  string s;
  cin>>s;
  int l=s.length();

  for(int i=l-1;i>=0;i--){
    s+=s[i];
  }
  cout<<s;
    
  return 0;
}