#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,cnt=0;
	cin>>n;
	string s;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s.compare("++X")==0||s.compare("X++")==0){
			cnt++;
		}
		else{
			cnt--;
		}
	}	
	cout<<cnt;
	return 0;
}