#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  
  int nb,ng;
  cin>>nb;
  int b[nb];
  for(int i=0;i<nb;i++){
    cin>>b[i];
  }
  cin>>ng;
  int g[ng];
  for(int i=0;i<ng;i++){
    cin>>g[i];
  }
  sort(b,b+nb);
  sort(g,g+ng);
  int cnt=0,i=0,j=0;
  while(i<nb && j<ng){
    if(abs(b[i]-g[j])<=1){
      cnt++;
      j++;
    }
    i++;
  }
  cout<<cnt;
  return 0;
}