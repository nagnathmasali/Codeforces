#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  int n,a[]={6,8,4,2};
  cin>>n;
  if(n)
    cout<<a[n%4];
  else
    cout<<"1";
}