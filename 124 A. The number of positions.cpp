#include<bits/stdc++.h>
using namespace std;

int main() {  
  int n,a,b;
  cin>>n>>a>>b;

  int rem=n-a;
  if(rem==b){
    cout<<b;
  }
  else if(rem>b){
    cout<<b+1;
  }
  else
    cout<<rem;

}