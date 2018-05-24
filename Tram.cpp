#include<bits/stdc++.h>
#include <iostream>
using namespace std;


int main() {
  
  int n,a,b,max=0,dif;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    dif=dif-a+b;
    if(dif>max){
      max=dif;
    }
  }
  cout<<max;
  
}