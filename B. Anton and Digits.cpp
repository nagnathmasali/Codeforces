#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int k2,k3,k5,k6;
  cin>>k2>>k3>>k5>>k6;
  int m1=min(k2,k5);
  //cout<<"m1: "<<m1<<endl;
  int i=min(m1,k6);
  //cout<<"i: "<<i<<endl;
  int sum=0;
  sum+=i*256;
  k2-=i;
  int j=min(k2,k3);
  //cout<<"j: "<<j<<endl;
  sum+=j*32;
  cout<<sum;
}