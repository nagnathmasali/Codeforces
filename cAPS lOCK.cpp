#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
  
  string s;
  cin>>s;
  
  transform(s.begin(),s.end(),s.begin(),::tolower);
  s[0]-=32;
  
  cout<<s;
  
}