#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n,s;
    cin>>n;
    int arr[4]={};
    for(int i=0;i<n;i++){
      cin>>s;
      arr[s-1]++;
    }
    
    int cnt=arr[3];
    arr[3]=0;
    int oc=arr[0],tc=arr[1],thc=arr[2];
    //cout<<oc<<" "<<tc<<" "<<thc<<" "<<arr[3]<<" cnt:"<<cnt<<endl;

    
    if(oc==thc){
      cnt+=thc;
      oc=0;
      thc=0;
    }
    else if(oc<thc and oc!=0 and thc!=0){
      cnt+=oc;
      thc-=oc;
      oc=0;
    }
    else if(oc>thc and oc!=0 and thc!=0){
      cnt+=thc;
      oc-=thc;
      thc=0;
    }
    //cout<<oc<<" "<<tc<<" "<<thc<<" "<<arr[3]<<" cnt:"<<cnt<<endl;
    
    if(tc/2>=1){
      cnt+=tc/2;
      tc=tc%2;
    }
    
    if(tc!=0 and oc>=2){
      cnt++;
      oc-=2;
    }
    
    
    if(oc/4>=1){
      cnt+=oc/4;
      oc=oc%4;
      //cout<<"\n:"<<cnt;
    }
    if(thc!=0){
      cnt+=thc;
      thc=0;
    }
    if(oc!=0 || tc!=0){
      cnt++;
    }
    
    cout<<cnt;
   /* for(auto& i:arr)
      cout<<i<<" ";  */
    
}