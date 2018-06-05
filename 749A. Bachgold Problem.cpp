#include <iostream>
#include<math.h>
#include<algorithm>
#include<string>
using  namespace std;


int main() {
  
  int n;
  int cnt;
  cin>>n;
  if(n%2==0){
    cnt=n/2;
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
      if(i!=cnt-1)
        cout<<"2 ";
      else
        cout<<"2";
  }
  else{
    cnt=n/2;
    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++){
      if(i!=cnt-1)
        cout<<"2 ";
      else  
        cout<<"3";
    }
  }
}