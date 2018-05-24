#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  pair <int,int> p[n];
  for(int i=0;i<n;i++){
    int f,s;
    cin>>f>>s;
    p[i]=make_pair(f,s);
  }
  sort(p,p+n);
  for(int i=1;i<n;i++){
    int a1,b1,a2,b2;
    a1=p[i-1].first;
    b1=p[i-1].second;
    a2=p[i].first;
    b2=p[i].second;
    if((a1<a2 && b1>b2)){
      cout<<"Happy Alex";
      return 0;
    }
  }
  cout<<"Poor Alex";
  return 0;
}