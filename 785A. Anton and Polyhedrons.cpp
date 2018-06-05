#include <iostream>
#include<math.h>
#include<algorithm>
#include<string>
using  namespace std;


int main() {
  
  int n;
  int sum=0;
  cin>>n;
  for(int i=0;i<n;i++){
    string s;
    cin>>s;

    if(s=="Tetrahedron")
      sum+=4;
    else if(s=="Cube")
      sum+=6;
    else if(s=="Octahedron")
      sum+=8;
    else if(s=="Dodecahedron")
      sum+=12;
    else  
      sum+=20;
  }
  cout<<sum;
}