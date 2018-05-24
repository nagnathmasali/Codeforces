#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
  int n,d;
  cin>>n>>d;
  int t[n];
  for(int i=0;i<n;i++){
    cin>>t[i];
  }
  int sing_time=0,joke_time,rem;
  for(int &i:t){
    sing_time+=i;
  }
  sing_time+=(n-1)*10;
  //cout<<sing_time;
  if(sing_time<=d){
    rem=d-sing_time;
    joke_time=rem+(n-1)*10;
    cout<<joke_time/5;
  }
  else{
    cout<<"-1";
  }
}