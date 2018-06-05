#include <iostream>
#include<math.h>
#include<algorithm>
using  namespace std;


int main() {
  int x1,y1,x2,y2,dist;
  cin>>x1>>y1>>x2>>y2;
  if(x1!=x2 and y1!=y2){
    if(abs(x1-x2)!=abs(y1-y2)){
      cout<<"-1";
      return 0;
    }
    else{
      printf("%d %d %d %d",x1,y2,x2,y1);
    }
  }
  else if(y1==y2){
    dist=abs(x1-x2);
    printf("%d %d %d %d",x1,y1+dist,x2,y2+dist);
  }
  else if(x1==x2){
    dist=abs(y1-y2);
    printf("%d %d %d %d",x1+dist,y1,x2+dist,y2);
  }
  else
    cout<<"-1";
}