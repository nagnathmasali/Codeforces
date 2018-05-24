#include <iostream>
using namespace std;


int main() {

  int n;
  cin>>n;
  int  a,b,c,sa=0,sb=0,sc=0;
  
  for(int i=0;i<n;i++){
    cin>>a>>b>>c;
    sa+=a;
    sb+=b;
    sc+=c;
    
  }
  if(!sa and !sb and !sc)
    cout<<"YES";
  else
    cout<<"NO";
  
}