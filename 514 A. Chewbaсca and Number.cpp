#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  string s;
  cin>>s;
  for(int i=0;i<s.length();i++){
    int a =s[i]-48;
    if(a>4){
      a=9-a;
    }
    if(!a && !i)
      continue;
    s[i]=a+'0';
  }
  cout<<s;
}