#include<bits/stdc++.h>
using namespace std;

int main() {  
  
  int n;
  cin>>n;
  int h1=0,m1=0,h2,m2;
  cin>>h1>>m1;
  int cnt=1,cash=1;
  
  while(--n){
    cin>>h2>>m2;
    if(h1==h2 and m1==m2){
      cnt++;
      if(cnt>cash)
        cash=cnt;
    }
    else 
      cnt=1;
    h1=h2;
    m1=m2;
  }
  cout<<cash;
}