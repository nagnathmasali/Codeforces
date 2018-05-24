#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
  
  int n,cnt=0;
  char a,b;
  cin>>n;
  cin>>a;
  for(int i=1;i<n;i++){
    cin>>b;
    if(a==b){
      cnt++;
    }
    else{
      a=b;
    }
  }
  cout<<cnt;
  
}