#include<bits/stdc++.h>
using namespace std;

int main() {  
  
  string s;
  cin>>s;
  char start='a';
  int sum=0,l1,l2;

  for(int i=0;i<s.length();i++){
    l1=abs(s[i]-start);
    l2=26-l1;
    sum+=min(l1,l2);
    start=s[i];
  }
  cout<<sum;
}