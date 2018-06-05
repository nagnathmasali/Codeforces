#include<bits/stdc++.h>
using namespace std;

int main() {  
  
  int n;
  cin>>n;
  long long a,sum=0, minj=1e9+1;

  for(int i=0;i<n;i++){
    cin>>a;
    if(a%2 and a<minj)
      minj=a;
    sum+=a;
  }

  if(sum%2)
    sum-=minj;

  cout<<sum;

}