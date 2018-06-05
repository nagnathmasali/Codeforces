#include <iostream>
#include <bits/stdc++.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
  long long n;
  cin>>n;
  long long a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    
    int c=a[i];
    int minv,maxv;
    if(i!=0){
      minv=min(abs(a[i-1]-c),abs(c-a[i+1]));
      maxv=max(abs(a[0]-c),abs(c-a[n-1]));
    }
    else if(i==0){
      minv=abs(c-a[i+1]);
      maxv=abs(c-a[n-1]);
    }
    else if(i==n-1){
      minv=abs(a[i-1]-c);
      maxv=abs(a[0]-c);
    }
    cout<<minv<<" "<<maxv<<endl;
  }
}