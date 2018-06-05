#include<bits/stdc++.h>
using namespace std;

int main() {  
  int a[3]={0,0,0};
  int n,i; 
  cin>>n;
  for(i=0;i<n;i++){
    int p;
    cin>>p;

    if(p==25){
      a[0]++;
      continue;
    }
    else if(p==50){
      a[1]++;
      if(a[0]>=1)
        a[0]--;
      else  
        break;
    }
    else{ 
      a[2]++;
      if(a[1]>=1 and a[0]>=1){
        a[1]--;
        a[0]--;
      }
      else if(a[0]>=3){
        a[0]-=3;
      }
      else{
        break;
      }
    }

  }
  if(i==n){
      cout<<"YES";
    }
    else{
      cout<<"NO";
    }
}