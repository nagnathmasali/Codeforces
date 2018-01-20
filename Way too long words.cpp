#include<iostream>
#include <string>
using namespace std;

int main()
{
	int n,len;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		getline(cin,s);
		len=s.length();
		if(len<=10){
			cout<<s;
		}
		else{
			cout<<s[0]+len+s[len-1];
		}
		cout<<"out";
	}
}