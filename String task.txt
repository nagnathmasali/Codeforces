#include<bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

int main()
{
	string s,news;
	char c;
	cin>>s;
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int i=0;
	while(s[i]){
	  c=s[i];
	  if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y'){ 
	  }  
	  else{  
	    news.push_back('.');
	    news.push_back(c);
	  }
	  i++;
	}
	cout<<news;
	return 0;
}
