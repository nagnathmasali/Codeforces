#include<bits/stdc++.h>
using namespace std;

int main() {  
  long long a,b,s;
  cin>>a>>b>>s;
  a=abs(a);
  b=abs(b);
  if(s>=a+b and (a+b)%2==s%2){
    cout<<"Yes";
  }
  else
    cout<<"No";
}