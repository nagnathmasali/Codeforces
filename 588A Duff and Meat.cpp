#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,min=200,sum=0;
  cin>>n;
  int a[n],p[n];
  for(int i=0;i<n;i++){
    cin>>a[i]>>p[i];
    if(p[i]<min)
      min=p[i];
    sum+=a[i]*min;
  }
  cout<<sum;
  
  return 0;
}