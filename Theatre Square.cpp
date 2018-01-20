#include<iostream>
using namespace std;

int main()
{
	long long n,m,a,n1,n2,quo1,quo2;
	cin>>n>>m>>a;
	quo1=n/a;
	quo2=m/a;
	//cout<<quo;
	n1=(n%a!=0)?quo1+1:quo1;
	n2=(m%a!=0)?quo2+1:quo2;
	cout<<n1*n2;

	return 0;
}