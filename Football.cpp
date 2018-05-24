#include <iostream>

using namespace std;

int main() {

  string s;
  int zc=0,oc=0;
  cin>>s;
  for(int i=0;i<s.length();i++){
    if(zc==7)
      break;
    else if(oc==7)
      break;
    if(s[i]=='0')
      zc++;
    else
      zc=0;
    if(s[i]=='1')
      oc++;
    else
      oc=0;
  }
  if(zc==7||oc==7)
    cout<<"YES";
  else
    cout<<"NO";
}