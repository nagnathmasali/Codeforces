#include <iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main() {
  ll n;
  cin>>n;
  ll b[n];
  for(int i=0;i<n;i++)
    cin>>b[i];
  ll min=b[0],max=b[0],minf=0,maxf=0;
  for(int i=1;i<n;i++){
    if(b[i]<min)
      min=b[i];
    if(b[i]>max)
      max=b[i];
  }
  for(int i=0;i<n;i++){
    if(b[i]==min)
      minf++;
    if(b[i]==max)
      maxf++;
  }
  if(min==max)
    cout<<0<<" "<<(n*(n-1))/2<<endl;
  else
    cout<<max-min<<" "<<minf*maxf;
}