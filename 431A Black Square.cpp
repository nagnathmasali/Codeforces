#include<bits/stdc++.h>
using namespace std;

int main() {
  
  int c[4];
  for(int i=0;i<4;i++){
    cin>>c[i];
  }
  string s;
  cin>>s;
  int l=s.length(),sum=0;
  for(int i=0;i<l;i++){
    //cout<<(s[i])<<endl;
    sum+=c[(int(s[i])-48)-1];
  }
  cout<<sum;
}