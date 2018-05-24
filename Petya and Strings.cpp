#include<bits/stdc++.h>
using namespace std;

int main() {
  string f,s;
  int i;
  cin>>f>>s;
  transform(f.begin(),f.end(),f.begin(),::tolower);
  transform(s.begin(),s.end(),s.begin(),::tolower);
  for(i=0;i<f.length();i++){
    if(f[i]==s[i])
      continue;
    else if(f[i]<s[i]){
      cout<<"-1";
      break;
    }
    else{
      cout<<"1";
      break;
    }
  }
  if(i==f.length()){
    cout<<"0";
  }
  //cout<<f<<s;
}