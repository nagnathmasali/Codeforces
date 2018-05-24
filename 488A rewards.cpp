#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main() {
  /*double a,b;
  for(int x,i=0;i<3;i++){
    cin>>x;
    a+=x;
  }
  for(int x,i=0;i<3;i++){
    cin>>x;
    b+=x;
  }
  double n;
  cin>>n;
  double c=ceil(a/5)+ceil(b/10);
  /*a%=5;
  b%=10;
  if(a%5!=0)c++;
  if(b%10!=0)c++;
  if(c<=n)
    cout<<"YES";
  else
    cout<<"NO";*/
  double a=0, b=0, c, n;
    for(int i=0; i<3; i++) scanf("%lf", &c), a+=c;
    for(int i=0; i<3; i++) scanf("%lf", &c), b+=c;
    scanf("%lf", &n);
    a=ceil(a/5), b=ceil(b/10);
    if(n>=a+b) printf("YES");
    else printf("NO");
    return 0;
}