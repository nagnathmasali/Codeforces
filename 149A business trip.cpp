#include <iostream>
#include <cstdio>
#include <cmath>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int k,c=0,sum=0,tot=0;
    cin>>k;
    int a[12];
    for(int i=0;i<12;i++){
      cin>>a[i];
      tot+=a[i];
    }
    
    if(tot<k)
    {
    	cout<<"-1";
    }
    else{
    	sort(a,a+12,greater<int>());
    	int i=0;
    	while(sum<k){
    		sum+=a[i];
    		i++;
    	}
    	cout<<i;
    }
    
    return 0;
}