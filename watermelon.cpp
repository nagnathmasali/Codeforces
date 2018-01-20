#include<iostream>
using namespace std;

int main()
{
	cout<<"helo";
	int n;
	cin>>n;
	if(n==1 || n==2){
		cout<<"NO";
	}
	else if(n%2==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}