//339 A
#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
  
  
  string s;
  cin>>s;
  vector<string> tokens;
  
  
  stringstream check(s);
  string intermediate;
  
  while(getline(check,intermediate,'+')){
    tokens.push_back(intermediate);
  }
  
  sort(tokens.begin(),tokens.end());
  
  for(int i=0;i<tokens.size();i++){
    cout<<tokens[i];
    if(i!=tokens.size()-1)
      cout<<'+';
  }
}