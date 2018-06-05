#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  string s;
  cin>>s;
  int l=s.length();
  int bc=0,gc=0;
  vector<int> v;

  for(int i=0;i<l;i++){
    if(s[i]=='B'){
      bc++;
    }
    if((bc!=0 and s[i]=='W')||(bc!=0 and i==l-1)){
      v.push_back(bc);
      bc=0;
    }
  }

  
  if(v.empty()){
    cout<<"0";
  }
  else{
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
    }
  }



}