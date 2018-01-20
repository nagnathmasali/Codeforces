#include<bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

int main()
{
	int r,c,sum=0;
	cin>>r>>c;
	int rrem=r%2;
	int rq=r/2;
	sum=rq*c;
	if(rrem==1){
	  sum+=(c/2);
	}
	cout<<sum;
	return 0;
}