#include <iostream>
#include<string>
using namespace std;

int main() {
  string n;
  cin>>n;
  int i;
  for(i=0;i<n.length();i++){
    if(n[i]=='4' or n[i]=='7'){
      continue;
    }
    else if(stoi(n)%4==0 || stoi(n)%7==0 ||stoi(n)%47==0){
      continue;
    }
    else{
      cout<<"NO";
      break;
    }
  }
  if(i==n.length())
    cout<<"YES";
  
}