#include <iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
  int n;
  cin>>n;
  vector<int> x(n);
  for(int i=0;i<n;i++){
    cin>>x[i];
  }
  sort(x.begin(),x.end());
  int m;
  cin>>m;
  int q[m];
  for(int i=0;i<m;i++){
    cin>>q[i];
   
    int k=upper_bound(x.begin(),x.end(),q[i])-x.begin();
    cout<<k<<endl;
  }
}