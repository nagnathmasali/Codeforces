#include<bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,b,c,cnt=0;
	for(int i=0;i<n;i++){
	  cin>>a>>b>>c;
	  if(a+b==2||b+c==2||a+c==2){
	    cnt++;
	  }
	}
	cout<<cnt;
	return 0;
}